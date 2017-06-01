#include <Arduino.h>

//   RGB Shades Audio Demo Code - REQUIRES MSGEQ7 AUDIO SENSOR
//   Copyright (c) 2015 macetech LLC
//   This software is provided under the MIT License (see license.txt)
//   Special credit to Mark Kriegsman for XY mapping code

//
//   Use Version 3.0 or later https://github.com/FastLED/FastLED
//   ZIP file https://github.com/FastLED/FastLED/archive/master.zip
//
//   Use Arduino IDE 1.0 or later
//
//   If your RGB Shades were purchased before July 2015:
//     This version has the standard Arduino bootloader. R9 and R10 near the control buttons will be present.
//     Select the “Arduino Pro or Pro Mini” option.
//     Then, go back into the Tools menu and find the Processor option and select “ATmega328 (5V, 16MHz)”.
//
//   If your RGB Shades were purchased after July 2015:
//     This version has the Optiboot bootloader. R9 and 10 near the control buttons will be missing.
//     Select the “Arduino Mini” option.
//     Then, go back into the Tools menu and find the Processor option and select “ATmega328”.
//
//   [Press] the SW1 button to cycle through available effects
//   Effects will also automatically cycle at startup
//   [Press and hold] the SW1 button (one second) to switch between auto and manual mode
//     * Auto Mode (one blue blink): Effects automatically cycle over time
//     * Manual Mode (two red blinks): Effects must be selected manually with SW1 button
//
//   [Press] the SW2 button to cycle through available brightness levels
//   [Press and hold] the SW2 button (one second) to reset brightness to startup value
//
//   [Press] SW1 and SW2 together to toggle between audio and non-audio effect sets
//   You can edit the mix of effects (for example, both audio and standard patterns in the same set)
//   Simply edit effectListAudio[] and effectListNoAudio[] below
//   When audio/non-audio mode has been toggled, you will see three green blinks.
//
//   Brightness, selected effect, and auto-cycle are saved in EEPROM after a delay
//   The RGB Shades will automatically start up with the last-selected settings

// RGB Shades data output to LEDs is on pin 5
#define LED_PIN  5

// RGB Shades color order (Green/Red/Blue)
#define COLOR_ORDER GRB
#define CHIPSET     WS2811

// Global maximum brightness value, maximum 255
#define MAXBRIGHTNESS 72
#define STARTBRIGHTNESS 102

// Cycle time (milliseconds between pattern changes)
#define cycleTime 15000

// Hue time (milliseconds between hue increments)
#define hueTime 30

// Time after changing settings before settings are saved to EEPROM
#define EEPROMDELAY 2000

// Include FastLED library and other useful files
#include <FastLED.h>
#include <EEPROM.h>
#include "messages.h"
#include "font.h"
#include "XYmap.h"
#include "utils.h"
#include "audio.h"
#include "FireworksXY.h"
#include "Torch.h"
#include "effects.h"
#include "buttons.h"
//#include "icons.h"

// list of functions that will be displayed
functionList effectListAudio[] = {
  drawVU,
  RGBpulse,
  drawAnalyzer
};

functionList effectListNoAudio[] = {
  iconpulse, //random coloured icons pulse to audio beat detection
  drawVU, //oob DrawVU
  RGBpulse, //oob rgb pusle
  drawAnalyzer, //oob analyser
  fireworks, // awesome fireworks with strobe flash on explosion. Beat synced,
  whitepulse, // Pulse all LEDs white on beat detection
  scrollingVU, // Scroll a VU
  beatBarcode, // Wipes a bar on every beat detect
  scrollingVUdot //WIP scrolling VU dot display
    /*
  Fire2012WithPalette, //fire effect
  torch, //different fire effect with sparks
  checkerboard, //red-green checkerboard effect
  bpm, //nice left-right animation with fixed palette. Can it be synched with beat
  threeSine, //oob three sine
  plasma, //oob plasma
  spinPlasma, //nice spinning version of plasma. random palette... looks good w some palettes but not all (dont like blue-white palette)
  radiate, //nice centre based pattern (concentric colour shift)
  radiate2, //love left-right right-left version of radiate
  confetti, //oob
  rider, // oob
  glitter, //oob
  colorRotation, //fairly boring all pixl same colour rainbow cycle
  slantBars, //oob slantBars
  colorFill, //oob colourfil
  slantBars2, //slower coloufill
  sideRain, //oob sideRain
  sideRain2, //dir reversed rain
  rainUp, //white rain up (like bubbles)
  rainDown, //rainbow rain down
  rainDown2, // slow white rain down
  snow,  //v slow white falling particles with fadng trails
  shadesOutline, //colour trace around outermost pixels
  shadesOutline2, //colour trace to fill shadesOutline2 follwing asymmetric pattern
  shadesOutline3, // slightly diff pattern/colours
  shadesOutline4, //symmetric spiral pattern fill
  blueSnake, // heartbeat cardiograph
  blueBorder, //wipe fill blue
  redBorder, // blueborder white fill
  redBorder2, // red jail bars pattern and red Border
  greenBorder, // solid unchanging red Border
  threeDee,  //3d glasses
  scrollTextZero, //red text message 0
  scrollTextOne, //rainbow text message 1
  scrollTextTwo, //blue background rainbow text message 2
  scrollTextThree, //blue background green text message 3
  */
};


byte numEffects;
const byte numEffectsAudio = (sizeof(effectListAudio) / sizeof(effectListAudio[0]));
const byte numEffectsNoAudio = (sizeof(effectListNoAudio) / sizeof(effectListNoAudio[0]));


// Runs one time at the start of the program (power up or reset)
void setup() {

  switch (audioEnabled) {
    case true:
      numEffects = numEffectsAudio;
      break;
    case false:
      numEffects = numEffectsNoAudio;
      break;
  }


  // check to see if EEPROM has been used yet
  // if so, load the stored settings
  byte eepromWasWritten = EEPROM.read(0);
  if (eepromWasWritten == 99) {
    currentEffect = EEPROM.read(1);
    autoCycle = EEPROM.read(2);
    currentBrightness = EEPROM.read(3);
  }

  if (currentEffect > (numEffects - 1)) currentEffect = 0;

  // write FastLED configuration data
  FastLED.addLeds<CHIPSET, LED_PIN, COLOR_ORDER>(leds, LAST_VISIBLE_LED + 1);

  // set global brightness value
  FastLED.setBrightness( scale8(currentBrightness, MAXBRIGHTNESS) );

  // configure input buttons
  pinMode(MODEBUTTON, INPUT_PULLUP);
  pinMode(BRIGHTNESSBUTTON, INPUT_PULLUP);
  pinMode(STROBEPIN, OUTPUT);
  pinMode(RESETPIN, OUTPUT);

  analogReference(DEFAULT);

  digitalWrite(RESETPIN, LOW);
  digitalWrite(STROBEPIN, HIGH);

  random16_add_entropy(analogRead(ANALOGPIN));

}



// Runs over and over until power off or reset
void loop()
{
  currentMillis = millis(); // save the current timer value
  updateButtons();          // read, debounce, and process the buttons
  doButtons();              // perform actions based on button state
  checkEEPROM();            // update the EEPROM if necessary

  // analyze the audio input
  if (currentMillis - audioMillis > AUDIODELAY) {
    audioMillis = currentMillis;
    doAnalogs();
  }

  // switch to a new effect every cycleTime milliseconds
  if (currentMillis - cycleMillis > cycleTime && autoCycle == true) {
    cycleMillis = currentMillis;
    if (++currentEffect >= numEffects) currentEffect = 0; // loop to start of effect list
    effectInit = false; // trigger effect initialization when new effect is selected
  }

  // increment the global hue value every hueTime milliseconds
  if (currentMillis - hueMillis > hueTime) {
    hueMillis = currentMillis;
    hueCycle(1); // increment the global hue value
  }

  // run the currently selected effect every effectDelay milliseconds
  if (currentMillis - effectMillis > effectDelay) {
    effectMillis = currentMillis;
    switch (audioEnabled) {
      case true:
        effectListAudio[currentEffect]();
        break;
      case false:
        effectListNoAudio[currentEffect]();
        break;
    }
    random16_add_entropy(1); // make the random values a bit more random-ish
  }

  // run a fade effect too if the confetti effect is running
  switch (audioEnabled) {
    case true:
      if (effectListAudio[currentEffect] == confetti) fadeAll(1);
      break;
    case false:
      if (effectListNoAudio[currentEffect] == confetti) fadeAll(1);
      break;
  }


  FastLED.show(); // send the contents of the led memory to the LEDs

}
