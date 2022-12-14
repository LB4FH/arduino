#include <Adafruit_NeoPixel.h>

#define PIN 6
int buttonPin = 13;
int buttonState = 0;

int numPixels = 64;
//int imageHeight = 16;
//int imageWidth = 33;

// Parameter 1 = number of pixels in strip
// Parameter 2 = pin number (most are valid)
// Parameter 3 = pixel type flags, add together as needed:
//   NEO_KHZ800  800 KHz bitstream (most NeoPixel products w/WS2812 LEDs)
//   NEO_KHZ400  400 KHz (classic 'v1' (not v2) FLORA pixels, WS2811 drivers)
//   NEO_GRB     Pixels are wired for GRB bitstream (most NeoPixel products)
//   NEO_RGB     Pixels are wired for RGB bitstream (v1 FLORA pixels, not v2)
Adafruit_NeoPixel strip = Adafruit_NeoPixel(numPixels, PIN, NEO_GRB + NEO_KHZ800);



// Norwegian flag

/*
  int imageHeight = 16;
  int imageWidth = 21;
  int red[16][21] = {
  {255, 255, 255, 255, 255, 255, 255, 0, 0, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255},
  {255, 255, 255, 255, 255, 255, 255, 0, 0, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255},
  {255, 255, 255, 255, 255, 255, 255, 0, 0, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255},
  {255, 255, 255, 255, 255, 255, 255, 0, 0, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255},
  {255, 255, 255, 255, 255, 255, 255, 0, 0, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255},
  {255, 255, 255, 255, 255, 255, 255, 0, 0, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255},
  {255, 255, 255, 255, 255, 255, 255, 0, 0, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255},
  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
  {255, 255, 255, 255, 255, 255, 255, 0, 0, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255},
  {255, 255, 255, 255, 255, 255, 255, 0, 0, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255},
  {255, 255, 255, 255, 255, 255, 255, 0, 0, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255},
  {255, 255, 255, 255, 255, 255, 255, 0, 0, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255},
  {255, 255, 255, 255, 255, 255, 255, 0, 0, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255},
  {255, 255, 255, 255, 255, 255, 255, 0, 0, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255},
  {255, 255, 255, 255, 255, 255, 255, 0, 0, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255},
  };
  int green[16][21] = {
  {19, 19, 19, 19, 19, 19, 255, 0, 0, 255, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19},
  {19, 19, 19, 19, 19, 19, 255, 0, 0, 255, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19},
  {19, 19, 19, 19, 19, 19, 255, 0, 0, 255, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19},
  {19, 19, 19, 19, 19, 19, 255, 0, 0, 255, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19},
  {19, 19, 19, 19, 19, 19, 255, 0, 0, 255, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19},
  {19, 19, 19, 19, 19, 19, 255, 0, 0, 255, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19},
  {255, 255, 255, 255, 255, 255, 255, 0, 0, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255},
  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
  {255, 255, 255, 255, 255, 255, 255, 0, 0, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255},
  {19, 19, 19, 19, 19, 19, 255, 0, 0, 255, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19},
  {19, 19, 19, 19, 19, 19, 255, 0, 0, 255, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19},
  {19, 19, 19, 19, 19, 19, 255, 0, 0, 255, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19},
  {19, 19, 19, 19, 19, 19, 255, 0, 0, 255, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19},
  {19, 19, 19, 19, 19, 19, 255, 0, 0, 255, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19},
  {19, 19, 19, 19, 19, 19, 255, 0, 0, 255, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19},
  };
  int blue[16][21] = {
  {0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
  {255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255},
  {255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255},
  {255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255},
  {255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255},
  {0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
  };


*/


// Rainbow
/*
  int imageHeight = 16;
  int imageWidth = 1;
  int red[16][1] = {
  {255},
  {255},
  {255},
  {196},
  {81},
  {0},
  {0},
  {0},
  {0},
  {0},
  {0},
  {87},
  {207},
  {255},
  {255},
  {255}
  };
  int green[16][1] = {
  {0},
  {0},
  {0},
  {0},
  {0},
  {3},
  {108},
  {228},
  {255},
  {255},
  {255},
  {255},
  {255},
  {225},
  {102},
  {0}
  };
  int blue[16][1] = {
  {0},
  {110},
  {236},
  {255},
  {255},
  {255},
  {255},
  {255},
  {205},
  {93},
  {2},
  {0},
  {0},
  {0},
  {0},
  {0}
  };

*/


// Mario
int imageHeight = 16;
int imageWidth = 33;
int red[16][33] = {
  {26, 23, 49, 213, 219, 211, 229, 184, 15, 28, 22, 23, 7, 20, 13, 8, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 26},
  {1, 13, 196, 232, 226, 223, 225, 221, 194, 193, 151, 0, 1, 0, 1, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
  {10, 15, 133, 115, 137, 249, 210, 159, 228, 42, 27, 1, 7, 3, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13},
  {11, 110, 192, 114, 220, 255, 216, 143, 238, 202, 145, 22, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13},
  {11, 156, 254, 118, 148, 250, 246, 183, 136, 249, 255, 189, 0, 6, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13},
  {14, 88, 163, 236, 233, 251, 240, 128, 124, 158, 103, 29, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13},
  {13, 0, 31, 255, 254, 245, 233, 210, 218, 172, 0, 1, 7, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13},
  {18, 0, 89, 146, 205, 101, 118, 135, 41, 29, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13},
  {15, 93, 118, 103, 205, 132, 176, 185, 84, 98, 77, 4, 1, 2, 0, 7, 0, 1, 0, 0, 1, 7, 1, 1, 0, 13, 0, 0, 0, 0, 4, 0, 13},
  {122, 125, 94, 121, 218, 242, 237, 214, 114, 121, 136, 103, 1, 0, 1, 0, 4, 0, 5, 6, 4, 162, 160, 4, 150, 162, 14, 155, 150, 16, 193, 138, 12},
  {255, 222, 138, 204, 243, 221, 229, 249, 184, 136, 250, 207, 0, 3, 0, 0, 0, 4, 3, 0, 3, 237, 189, 16, 207, 207, 35, 212, 164, 62, 250, 167, 15},
  {252, 255, 240, 230, 212, 225, 230, 219, 213, 238, 255, 220, 0, 2, 3, 1, 4, 1, 7, 0, 0, 200, 168, 0, 177, 193, 32, 198, 159, 11, 206, 151, 10},
  {255, 244, 244, 234, 228, 205, 209, 228, 232, 228, 254, 211, 8, 5, 53, 1, 1, 51, 0, 4, 55, 30, 72, 55, 33, 47, 0, 46, 38, 40, 61, 24, 42},
  {40, 36, 204, 232, 205, 22, 17, 207, 247, 194, 51, 24, 0, 120, 255, 11, 80, 251, 25, 101, 255, 1, 115, 250, 0, 0, 7, 0, 26, 254, 53, 9, 234},
  {3, 63, 135, 138, 26, 1, 0, 26, 122, 125, 70, 0, 0, 169, 255, 19, 122, 254, 41, 140, 247, 31, 170, 240, 47, 3, 4, 0, 113, 253, 87, 57, 253},
  {117, 129, 116, 102, 13, 11, 17, 14, 102, 119, 127, 114, 16, 97, 220, 28, 86, 227, 21, 93, 214, 24, 120, 203, 36, 13, 5, 16, 61, 231, 76, 37, 204}
};
int green[16][33] = {
  {26, 11, 15, 10, 17, 9, 15, 13, 8, 15, 12, 14, 12, 11, 14, 14, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 26},
  {0, 0, 3, 3, 0, 1, 0, 0, 6, 0, 1, 3, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
  {14, 5, 90, 95, 108, 163, 138, 121, 121, 6, 2, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13},
  {11, 101, 170, 119, 166, 190, 171, 134, 176, 173, 121, 19, 0, 1, 2, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13},
  {11, 126, 184, 99, 121, 180, 174, 140, 110, 198, 202, 118, 6, 6, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13},
  {15, 84, 118, 166, 180, 187, 169, 118, 119, 128, 88, 18, 0, 3, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13},
  {14, 1, 27, 178, 174, 162, 174, 161, 159, 123, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13},
  {10, 10, 94, 96, 24, 124, 129, 84, 29, 23, 3, 1, 4, 0, 7, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13},
  {21, 90, 128, 91, 0, 70, 26, 3, 97, 108, 77, 5, 0, 4, 0, 0, 1, 1, 1, 5, 0, 0, 8, 0, 6, 0, 0, 3, 5, 2, 3, 1, 13},
  {114, 118, 106, 101, 17, 0, 0, 32, 109, 110, 125, 87, 0, 4, 1, 4, 4, 2, 2, 0, 9, 114, 112, 3, 102, 117, 11, 114, 95, 11, 133, 105, 13},
  {180, 174, 94, 25, 134, 0, 35, 123, 9, 117, 203, 141, 10, 0, 1, 2, 2, 0, 0, 2, 10, 157, 124, 24, 139, 136, 30, 140, 115, 45, 167, 118, 13},
  {189, 208, 132, 0, 23, 4, 1, 17, 10, 158, 218, 155, 1, 2, 0, 1, 0, 0, 0, 3, 3, 142, 115, 2, 122, 134, 22, 133, 113, 7, 140, 114, 14},
  {185, 165, 11, 0, 3, 0, 7, 1, 2, 32, 177, 156, 0, 4, 42, 0, 0, 36, 2, 3, 29, 26, 48, 41, 29, 38, 3, 38, 27, 29, 48, 22, 34},
  {33, 25, 6, 2, 0, 2, 1, 0, 0, 6, 26, 12, 0, 88, 179, 15, 57, 193, 19, 66, 180, 0, 70, 184, 4, 1, 0, 6, 19, 179, 46, 0, 164},
  {2, 62, 107, 91, 10, 0, 4, 7, 98, 115, 75, 1, 4, 111, 175, 23, 85, 189, 43, 86, 171, 37, 109, 168, 38, 0, 2, 1, 67, 179, 58, 40, 176},
  {112, 120, 129, 120, 21, 14, 12, 22, 113, 128, 122, 96, 11, 75, 167, 19, 51, 168, 33, 64, 168, 26, 80, 153, 26, 12, 17, 14, 40, 165, 68, 28, 150}
};
int blue[16][33] = {
  {34, 13, 13, 16, 17, 7, 17, 6, 15, 22, 10, 9, 6, 12, 6, 28, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 26},
  {0, 0, 0, 0, 0, 0, 12, 5, 0, 0, 13, 0, 2, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
  {15, 3, 0, 0, 0, 14, 0, 0, 0, 8, 0, 6, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13},
  {0, 8, 0, 3, 16, 0, 7, 0, 5, 7, 0, 0, 9, 4, 1, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13},
  {19, 4, 0, 4, 0, 0, 4, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13},
  {17, 0, 0, 0, 12, 2, 0, 0, 2, 4, 3, 0, 2, 9, 10, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13},
  {19, 0, 0, 2, 0, 0, 8, 7, 0, 2, 4, 0, 10, 5, 9, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13},
  {8, 8, 0, 1, 3, 0, 0, 1, 0, 7, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13},
  {19, 0, 0, 9, 3, 0, 2, 0, 7, 0, 5, 0, 5, 0, 2, 14, 0, 11, 5, 0, 4, 0, 0, 0, 0, 5, 4, 5, 5, 1, 9, 5, 11},
  {3, 2, 0, 2, 0, 0, 6, 0, 0, 2, 1, 2, 0, 0, 9, 0, 0, 0, 0, 0, 5, 6, 2, 0, 4, 0, 0, 0, 0, 5, 0, 0, 15},
  {19, 2, 0, 2, 0, 7, 0, 2, 4, 0, 3, 0, 12, 2, 14, 0, 12, 0, 0, 4, 2, 6, 0, 3, 2, 8, 0, 2, 0, 0, 9, 0, 16},
  {16, 0, 6, 3, 3, 11, 0, 7, 0, 11, 2, 1, 0, 2, 5, 3, 6, 0, 0, 6, 0, 6, 11, 0, 0, 8, 0, 3, 1, 6, 0, 7, 13},
  {12, 0, 4, 7, 7, 0, 3, 0, 4, 0, 1, 3, 4, 2, 0, 0, 0, 13, 2, 0, 2, 0, 10, 0, 4, 0, 0, 2, 9, 0, 0, 0, 11},
  {7, 5, 7, 0, 2, 3, 1, 2, 0, 4, 4, 0, 5, 5, 0, 1, 5, 0, 0, 0, 7, 8, 3, 0, 2, 0, 0, 2, 1, 0, 2, 2, 16},
  {0, 0, 0, 0, 0, 7, 0, 13, 0, 0, 0, 4, 1, 4, 13, 8, 0, 3, 0, 12, 0, 3, 3, 0, 0, 11, 7, 0, 15, 0, 0, 0, 2},
  {21, 17, 24, 12, 8, 19, 16, 1, 8, 21, 20, 10, 8, 15, 1, 14, 13, 14, 11, 24, 10, 5, 11, 22, 16, 10, 5, 25, 9, 17, 6, 19, 28}
};


void setup() {
  strip.begin();
  strip.show(); // Initialize all pixels to 'off'
  pinMode(buttonPin, INPUT);

}

void loop() {
  buttonState = digitalRead(buttonPin);
  if (buttonState == LOW) {
    delay(5000);
    for (int i = 0; i < imageWidth; i++) {
      int currentPixel = 0;
      int prevPixel = 0;
      for (int j = 0; j < imageHeight; j++) {
        for (int k = currentPixel; k < (prevPixel + 4); k++) {
          strip.setPixelColor(k, strip.Color(red[j][i], green[j][i], blue[j][i]));
          //int v = random(50,230);
          //strip.setPixelColor(k, strip.Color(0,0,v));

        }
        currentPixel += 4;
        prevPixel = currentPixel;
      }
      strip.show();
      delay (100);
    }
 /*
    for (int i = 0; i < imageWidth; i++) {
      int currentPixel = 0;
      int prevPixel = 0;
      for (int j = 0; j < imageHeight; j++) {
        for (int k = currentPixel; k < (prevPixel + 4); k++) {
          strip.setPixelColor(k, strip.Color(red[j][i], green[j][i], blue[j][i]));
          //int v = random(50,230);
          //strip.setPixelColor(k, strip.Color(0,v,0));

        }
        currentPixel += 4;
        prevPixel = currentPixel;
      }
      strip.show();
      delay (random(50, 350));

    
   }
    for (int i = 0; i < imageWidth; i++) {
      int currentPixel = 0;
      int prevPixel = 0;
      for (int j = 0; j < imageHeight; j++) {
        for (int k = currentPixel; k < (prevPixel + 4); k++) {
          strip.setPixelColor(k, strip.Color(red[j][i], green[j][i], blue[j][i]));
          //int v = random(50,230);
          //strip.setPixelColor(k, strip.Color(v,0,0));

        }
        currentPixel += 4;
        prevPixel = currentPixel;
      }
      strip.show();
      delay (random(50, 350));
    }
*/
  }
  else {
    clearStrip();
    delayMicroseconds(5);
  }


}

void clearStrip () {
  for (int i = 0; i < 64; i++) {
    strip.setPixelColor(i, strip.Color(0, 0, 0));
  }
  strip.show();

}
// Fill the dots one after the other with a color
void colorWipe(uint32_t c, uint8_t wait) {
  for (uint16_t i = 0; i < strip.numPixels(); i++) {
    strip.setPixelColor(i, c);
    strip.show();
    delayMicroseconds(wait);
  }
}
