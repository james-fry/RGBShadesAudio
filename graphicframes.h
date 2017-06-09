// Full-frame bitmap graphics

// Hearts
const byte Graphics[3][24] PROGMEM = {
{0b00000000, 0b00000000, 0b00000000, 0b00001000, 0b00011100, 0b00111000, 0b00011100, 0b00001000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00001000, 0b00011100, 0b00111000, 0b00011100, 0b00001000, 0b00000000, 0b00000000, 0b00000000},
{0b00000000, 0b00000000, 0b00001100, 0b00011110, 0b00111110, 0b01111100, 0b00111110, 0b00011110, 0b00001100, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00001100, 0b00011110, 0b00111110, 0b01111100, 0b00111110, 0b00011110, 0b00001100, 0b00000000, 0b00000000},
{0b00000000, 0b00001110, 0b00011111, 0b00111111, 0b01111111, 0b11111110, 0b01111111, 0b00111111, 0b00011111, 0b00001110, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00001110, 0b00011111, 0b00111111, 0b01111111, 0b11111110, 0b01111111, 0b00111111, 0b00011111, 0b00001110, 0b00000000}
};

// Snowflake
const byte Grayscale[48][48] PROGMEM = {
{   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0},
{   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0},
{   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0},
{   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0},
{   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  16,  17,   0,   3,   0,   9,   0,   1,   0,   0,   0,   0,   0,   2,   0,   0,   3,   0,  19,   0,   0,   0,   1,  16,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0},
{   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  88, 255, 178,   0, 217, 233,   0,   0, 157, 224,  20,   4,   0,   0, 255, 177,   0,   1, 202, 225,   0, 143, 255,  81,   5,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0},
{   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 120, 255, 255, 125, 255, 169,   0, 192, 252, 238,   6,   2,   0,   0, 237, 253, 192,   0, 169, 255,  72, 255, 255, 113,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0},
{   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 190, 255, 255, 254,   0, 156, 255, 250,  21,   0,   0,   0,   5,  10, 251, 255, 173,   0, 248, 255, 251, 217,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0},
{   0,   0,   0,   0,   0,   0,   0,   0,   0,   3,  31, 255, 255, 255, 255, 255, 159, 119, 255, 255,  51,   0,   0,   0,   0,   0,   0,  21, 255, 252, 136, 106, 255, 255, 255, 255, 255,  31,   2,   0,   0,   0,   0,   0,   0,   0,   0,   0},
{   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,   0, 204, 201, 181, 243, 254, 251, 255, 255,  69,   0, 228, 154,   0,   0, 144, 208,  11,  73, 255, 255, 246, 254, 240, 179, 198, 195,   5,   2,   0,   0,   0,   0,   0,   0,   0,   0,   0},
{   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  10,  54, 151, 255, 254, 253, 156,   0, 193, 249, 154,   0,   0, 152, 248, 210,   0, 131, 255, 252, 253, 167,  65,  13,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0},
{   0,   0,   0,   0,   0,   0,   0,   0,   0,  62, 192, 255, 255, 255, 255, 255, 255, 255,  61, 130, 255, 240,  11,   3,   0,   0, 242, 252, 156,  14, 255, 255, 255, 255, 255, 255, 255, 195,  67,   1,   0,   0,   0,   0,   0,   0,   0,   0},
{   0,   0,   0,   0,   0,   0,   0,   5,  38, 255, 255, 255, 255, 198, 150, 127, 254, 254, 251, 255, 255,  41,   2,   0,   0,  10,  33, 253, 252, 250, 255, 252, 126, 148, 193, 253, 255, 255, 255,  62,   0,   0,   0,   0,   0,   0,   0,   0},
{   0,   0,   0,   0,   0,   0,   0,   0,   0,  65, 101,  12,   0,   0,  15,  18, 214, 255, 253, 253, 118,  48,  33,   0,   0,  23,  44, 119, 255, 253, 250, 219,  38,  18,   0,   0,   5,  88,  75,   0,   1,   0,   0,   0,   0,   0,   0,   0},
{   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 131, 237, 244, 251, 253, 254, 255, 255, 227, 255, 255,   0,   0, 227, 255, 221, 255, 255, 254, 252, 251, 245, 243, 130,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0},
{   0,   0,   0,   0,   0,   1,   0,   2,   0,   0,   2,   2, 210, 255, 231, 203, 189, 234, 253, 255, 252, 255, 214,   0,   0, 182, 251, 251, 255, 255, 233, 182, 203, 230, 255, 236,   2,   0,   0,   0,   5,   0,   0,   0,   0,   0,   0,   0},
{   0,   0,   0,   0,   0,   0, 118,  28,   1,   0,   0,   0,   0,   0,   0,   0,  50, 235, 252, 255, 252, 246,   9, 188, 204,   0, 255, 254, 255, 255, 238,  61,   0,   0,   0,   0,   1,   0,   0,   0,   3, 122,   0,   0,   0,   0,   0,   0},
{   0,   0,   0,   0,   1,   0, 250, 255,   0,   0,   0,   0,   2,   2,   3,   0, 255, 247, 255, 255, 254, 255,  30, 224, 255,  47, 255, 254, 255, 252, 249, 255,  14,   6,   2,   1,   0,   1,   3,   6, 232, 236,   0,   3,   0,   0,   0,   0},
{   0,   0,   0,   0,   2,   0, 236, 255,  59,   0, 237, 155,   0,   0,   1,   0, 141, 191, 147, 255, 252, 255,  95, 216, 255, 115, 255, 254, 255, 171, 178, 145,   4,   3,   0,   0, 117, 255,   0,  30, 254, 215,   0,   4,   0,   0,   0,   0},
{   0,   0,   0,   0,   0,   0, 111, 255, 193,   0, 253, 255,  32,   4,   0,   0,   0,  33,  47, 117, 255, 255, 225, 255, 255, 238, 254, 254, 145,  17,  45,   0,   0,   0,   0,   0, 255, 255,  11, 137, 255, 147,   1,   0,   0,   0,   0,   0},
{   0,   0,   4,  14, 205, 126,   4, 255, 239,  14, 141, 255, 122,  11, 186, 189,   2, 255, 255, 147, 175, 254, 255, 254, 255, 255, 255, 190, 125, 255, 255,   0, 160, 209,   2, 132, 255, 189,   0, 255, 255,  42,  99, 240,  18,   0,   0,   0},
{   0,   0,   3,   7, 230, 240,   1, 209, 255,  65,  45, 255, 255,   9, 245, 255,  21,  66, 223, 252, 255, 255, 255, 255, 255, 255, 255, 255, 253, 230,  85,  35, 247, 255,   3, 231, 255,  27,  78, 255, 255,   0, 255, 254,   0,   0,   0,   0},
{   0,   0,   0,   3,  54, 255, 161, 140, 251, 233,  30, 255, 255, 226, 253, 255, 243, 203,  97, 206, 255, 255, 255, 255, 255, 255, 255, 251, 204, 104, 197, 238, 255, 255, 213, 255, 250,  30, 214, 255, 157, 117, 254,  69,   6,   0,   3,   0},
{   0,   9, 190, 255, 255, 253, 255, 255, 255, 253, 255, 255, 255, 250, 255, 255, 252, 249, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 249, 252, 255, 255, 248, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 196,  17,   1},
{   1,   0, 210, 252, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 236,   0,   0},
{   0,   1,   1,  49, 102, 255, 169, 160, 252, 235,  52, 255, 254, 231, 254, 251, 255, 209,  90, 221, 255, 255, 255, 255, 255, 255, 255, 252, 220,  82, 201, 255, 255, 255, 213, 255, 244,  67, 214, 255, 173, 135, 254, 108,  59,   0,   2,   0},
{   0,   0,   4,   8, 230, 250,   1, 209, 255,  80,  45, 255, 255,  13, 249, 255,   6,  25, 208, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 233,  41,  16, 255, 255,   0, 239, 255,  26,  90, 255, 250,   0, 255, 246,   0,   1,   0,   0},
{   0,   0,   5,  17, 255, 157,   0, 255, 241,  15, 136, 255, 134,   4, 223, 209,   1, 237, 255, 184, 143, 254, 253, 255, 255, 254, 255, 151, 159, 255, 255,   0, 190, 238,   0, 139, 255, 172,   0, 255, 255,  32, 122, 255,  14,   0,   0,   0},
{   0,   0,   0,   0,   0,   0, 100, 255, 199,   0, 248, 253,  36,   5,   0,   0,   0,  61,  73,  81, 255, 255, 227, 254, 255, 238, 252, 255,  98,  47,  76,   0,   0,   0,   1,   0, 255, 255,   6, 146, 255, 141,   0,   0,   0,   0,   0,   0},
{   0,   0,   0,   0,   0,   0, 231, 255,  70,   0, 228, 206,   0,   0,   0,   0,  87, 167, 114, 255, 254, 255, 106, 218, 255, 125, 255, 255, 255, 142, 157,  94,   0,   1,   0,   0, 149, 255,   5,  32, 255, 209,   0,   2,   0,   0,   0,   0},
{   0,   0,   0,   0,   1,   0, 253, 255,   0,   0,  24,   0,   3,   3,   3,   1, 255, 255, 255, 254, 255, 255,  35, 212, 250,  49, 255, 254, 253, 255, 255, 255,  14,   6,   3,   2,   0,  36,   0,   8, 246, 227,   0,   3,   0,   0,   0,   0},
{   0,   0,   0,   0,   0,   0, 135,  51,   4,   0,   3,   0,   0,  16,   0,   0,  98, 241, 253, 255, 252, 249,   1, 206, 213,   0, 255, 254, 255, 255, 241, 105,   0,   0,  13,   0,   0,   5,   0,   0,  29, 147,   0,   0,   0,   0,   0,   0},
{   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   2,   2, 212, 242, 239, 229, 198, 239, 253, 255, 253, 255, 218,   0,   0, 180, 252, 253, 255, 255, 239, 193, 227, 239, 244, 229,  10,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0},
{   0,   0,   0,   0,   0,   0,   1,   0,   1,   4,   3,   4, 137, 239, 255, 255, 255, 255, 255, 255, 214, 255, 255,   0,   1, 244, 255, 209, 255, 255, 255, 255, 255, 255, 245, 149,   0,   5,   3,   1,   0,   1,   0,   0,   0,   0,   0,   0},
{   0,   0,   0,   0,   0,   0,   0,   0,   2,  28,  44,  12,   2,   0,   0,  15, 232, 255, 254, 253, 108,  54,  25,   1,   0,  16,  79,  91, 255, 255, 251, 229,  36,   0,   0,   3,  10,  29,  38,   5,   0,   0,   0,   0,   0,   0,   0,   0},
{   0,   0,   0,   0,   0,   0,   0,   5,  31, 255, 255, 243, 223, 201, 156, 125, 246, 255, 255, 255, 255,  18,   0,   0,   0,   7,  10, 255, 254, 255, 252, 249, 122, 153, 199, 222, 241, 255, 255,  39,   0,   0,   0,   0,   0,   0,   0,   0},
{   0,   0,   0,   0,   0,   0,   0,   0,   0, 103, 199, 231, 255, 255, 255, 255, 253, 255,  66, 153, 255, 241,   0,   4,   0,   0, 219, 255, 169,  21, 255, 253, 255, 255, 255, 255, 233, 199,  98,   0,   1,   0,   0,   0,   0,   0,   0,   0},
{   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   4,   8,  73, 193, 255, 255, 254, 147,   0, 198, 255, 157,   0,   0, 150, 252, 235,   0, 101, 255, 255, 253, 202,  83,  11,   5,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0},
{   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 173, 171, 151, 200, 255, 255, 255, 255,  62,   9, 207, 162,   0,   0, 151, 195,  22,  52, 255, 255, 255, 253, 208, 153, 169, 163,   0,   3,   0,   0,   0,   0,   0,   0,   0,   0,   0},
{   0,   0,   0,   0,   0,   0,   0,   0,   0,   4,  55, 241, 240, 239, 252, 255, 153, 138, 255, 255,  35,   0,   0,   1,   0,   0,   0,   9, 255, 255, 163,  83, 255, 253, 243, 239, 255,  47,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0},
{   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  18,   0, 213, 255, 252, 241,   5, 161, 252, 250,   0,   1,   0,   0,   5,   4, 233, 254, 200,   0, 243, 255, 250, 232,  15,  17,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0},
{   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   3, 105, 255, 255, 150, 255, 159,   0, 197, 252, 231,   0,   2,   0,   0, 209, 252, 215,   0, 160, 255, 110, 255, 255, 103,   5,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0},
{   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  92, 255, 210,   0, 234, 230,   0,   0, 206, 241,  17,   4,   0,   0, 255, 240,   0,   1, 199, 218,   4, 169, 255,  83,   4,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0},
{   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  17,  57,   0,   4,   8,  27,   0,   2,   0,   6,   3,   0,   0,   0,  11,   0,   3,   0,  33,  18,   0,   0,  48,  16,   2,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0},
{   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   2,   5,   1,   0,   2,   3,   0,   0,   0,   2,   0,   0,   0,   0,   2,   0,   0,   0,   3,   2,   0,   1,   5,   2,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0},
{   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0},
{   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0},
{   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0}
};