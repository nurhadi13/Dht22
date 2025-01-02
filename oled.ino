#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

const unsigned char logo[] PROGMEM = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x01, 0xff, 0xff, 0xff, 0xf8, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x80, 0x00,
  0x00, 0x01, 0xff, 0xff, 0xff, 0xe3, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x80, 0x00,
  0x00, 0x01, 0xff, 0xff, 0xff, 0x8f, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x80, 0x00,
  0x00, 0x01, 0xff, 0xff, 0xfe, 0x3f, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x80, 0x00,
  0x00, 0x01, 0xff, 0xff, 0xf8, 0xfe, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x80, 0x00,
  0x00, 0x01, 0xff, 0xff, 0xf3, 0xf8, 0x9f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x80, 0x00,
  0x00, 0x01, 0xff, 0xff, 0xef, 0xe3, 0xcf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x80, 0x00,
  0x00, 0x01, 0xff, 0xff, 0x9f, 0xcf, 0x03, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x80, 0x00,
  0x00, 0x01, 0xff, 0xff, 0x3f, 0x1e, 0x3c, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x80, 0x00,
  0x00, 0x01, 0xff, 0xfe, 0x7e, 0x79, 0xff, 0xf9, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x80, 0x00,
  0x00, 0x01, 0xff, 0xfc, 0xfc, 0xe7, 0xff, 0xfc, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x80, 0x00,
  0x00, 0x01, 0xff, 0xf9, 0xf9, 0xcf, 0xff, 0xfe, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0x80, 0x00,
  0x00, 0x01, 0xff, 0xf3, 0xf7, 0x9f, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0x80, 0x00,
  0x00, 0x01, 0xff, 0xf7, 0xe7, 0x7f, 0xff, 0xff, 0xff, 0x07, 0xff, 0xff, 0xff, 0xff, 0x80, 0x00,
  0x00, 0x01, 0xff, 0xef, 0xce, 0xff, 0xff, 0xff, 0xff, 0xf8, 0xff, 0xff, 0xff, 0xff, 0x80, 0x00,
  0x00, 0x01, 0xff, 0xcf, 0x9d, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7f, 0xff, 0xff, 0xff, 0x80, 0x00,
  0x00, 0x01, 0xff, 0xdf, 0x39, 0xfe, 0x7f, 0xff, 0xff, 0xfe, 0x3f, 0xff, 0xff, 0xff, 0x80, 0x00,
  0x00, 0x01, 0xff, 0x9f, 0x73, 0xfc, 0xff, 0xff, 0xff, 0xf0, 0x67, 0xff, 0xff, 0xff, 0x80, 0x00,
  0x00, 0x01, 0xff, 0xbe, 0x77, 0xf9, 0xff, 0xdf, 0xff, 0xc7, 0xfb, 0xff, 0xff, 0xff, 0x80, 0x00,
  0x00, 0x01, 0xff, 0xbe, 0xef, 0xf5, 0xff, 0x9f, 0xff, 0x3f, 0xfd, 0xff, 0xff, 0xff, 0x80, 0x00,
  0x00, 0x01, 0xff, 0x3d, 0xff, 0xeb, 0xff, 0x3f, 0xfc, 0xff, 0xfe, 0xff, 0xff, 0xff, 0x80, 0x00,
  0x00, 0x01, 0xff, 0x7d, 0xff, 0xdb, 0xfe, 0xbf, 0xf9, 0xff, 0xff, 0x7f, 0xff, 0xff, 0x80, 0x00,
  0x00, 0x01, 0xff, 0x7b, 0xff, 0xbb, 0xfd, 0xbf, 0xe3, 0xff, 0xff, 0xbf, 0xff, 0xff, 0x80, 0x00,
  0x00, 0x01, 0xff, 0x7f, 0xff, 0xbb, 0xfd, 0x9f, 0xc7, 0xff, 0xff, 0x9f, 0xff, 0xff, 0x80, 0x00,
  0x00, 0x01, 0xff, 0x7f, 0xff, 0x03, 0xf8, 0x1f, 0xcf, 0xff, 0xff, 0xcf, 0xff, 0xff, 0x80, 0x00,
  0x00, 0x01, 0xfe, 0x7f, 0xfe, 0x33, 0xfb, 0x9f, 0x9f, 0xff, 0xff, 0xe7, 0xff, 0xff, 0x80, 0x00,
  0x00, 0x01, 0xfe, 0x7f, 0xfe, 0xfb, 0xfb, 0xbf, 0x3f, 0xff, 0xff, 0xf3, 0xff, 0xff, 0x80, 0x00,
  0x00, 0x01, 0xfc, 0x7f, 0xfe, 0xfb, 0xf3, 0x7f, 0x3f, 0xff, 0xff, 0xf9, 0xff, 0xff, 0x80, 0x00,
  0x00, 0x01, 0xfa, 0x7f, 0xfc, 0xf7, 0xf1, 0xfe, 0x7f, 0xff, 0xff, 0xfe, 0xff, 0xff, 0x80, 0x00,
  0x00, 0x01, 0xf6, 0x7f, 0xfd, 0xef, 0xff, 0xfe, 0x7f, 0xff, 0xff, 0xff, 0x3f, 0xff, 0x80, 0x00,
  0x00, 0x01, 0xf6, 0x7f, 0xfc, 0x3f, 0xff, 0xfe, 0x7f, 0xff, 0xff, 0xff, 0xcf, 0xff, 0x80, 0x00,
  0x00, 0x01, 0xf2, 0x7f, 0xff, 0xff, 0xff, 0xfe, 0xf8, 0xfc, 0xc0, 0x7f, 0xf1, 0xff, 0x80, 0x00,
  0x00, 0x01, 0xf9, 0x7f, 0xff, 0xff, 0xff, 0xfc, 0x0e, 0xec, 0xd8, 0x00, 0xfe, 0x1f, 0x80, 0x00,
  0x00, 0x01, 0xf3, 0x3f, 0xff, 0xff, 0xff, 0xe0, 0x0f, 0x6e, 0x58, 0x00, 0x03, 0xcf, 0x80, 0x00,
  0x00, 0x01, 0xf3, 0xbf, 0xff, 0xff, 0xff, 0xfc, 0x07, 0x6e, 0x58, 0x00, 0x00, 0x67, 0x80, 0x00,
  0x00, 0x01, 0xf3, 0xbf, 0xff, 0xff, 0xdf, 0xfe, 0x33, 0x6e, 0x59, 0x80, 0x00, 0x37, 0x80, 0x00,
  0x00, 0x01, 0xfb, 0xbf, 0xff, 0xff, 0xff, 0xfc, 0xfb, 0x6c, 0xd9, 0xc0, 0x00, 0x13, 0x80, 0x00,
  0x00, 0x01, 0xfb, 0x9f, 0xff, 0xf7, 0xff, 0xf9, 0xfb, 0x67, 0x99, 0xe0, 0x00, 0x1b, 0x80, 0x00,
  0x00, 0x01, 0xfd, 0xdf, 0xff, 0xdf, 0xff, 0xf3, 0xfb, 0x7e, 0x9b, 0xf0, 0x00, 0x09, 0x80, 0x00,
  0x00, 0x01, 0xfc, 0xcf, 0xff, 0x7f, 0xff, 0xef, 0xfb, 0x74, 0xb3, 0xf8, 0x00, 0x05, 0x80, 0x00,
  0x00, 0x01, 0xf9, 0x2f, 0xfc, 0xff, 0xff, 0x9f, 0xfb, 0x6d, 0x33, 0xfc, 0x00, 0x01, 0x80, 0x00,
  0x00, 0x01, 0xf9, 0xe7, 0xf9, 0xff, 0xff, 0x7f, 0xfa, 0xd9, 0x77, 0xfe, 0x00, 0x07, 0x80, 0x00,
  0x00, 0x01, 0xfd, 0xf7, 0xfb, 0xff, 0xff, 0xff, 0xfa, 0xb3, 0x67, 0xff, 0x00, 0x7f, 0x80, 0x00,
  0x00, 0x01, 0xfc, 0xfb, 0xf1, 0xff, 0xdf, 0xff, 0xf3, 0x66, 0xe7, 0xff, 0x83, 0xff, 0x80, 0x00,
  0x00, 0x01, 0xff, 0x3d, 0xf8, 0x7f, 0xff, 0xff, 0xeb, 0x9d, 0xef, 0xff, 0xcf, 0xff, 0x80, 0x00,
  0x00, 0x01, 0xff, 0xcc, 0xfd, 0xff, 0xff, 0xff, 0xf3, 0xfb, 0xcf, 0xff, 0xe7, 0xff, 0x80, 0x00,
  0x00, 0x01, 0xff, 0xfc, 0xff, 0xff, 0xff, 0xff, 0xf3, 0xef, 0xdf, 0xff, 0xf0, 0xff, 0x80, 0x00,
  0x00, 0x01, 0xff, 0xff, 0x7f, 0xff, 0xff, 0xff, 0xf3, 0xdf, 0xbf, 0xbf, 0xf9, 0x39, 0x80, 0x00,
  0x00, 0x01, 0xff, 0xff, 0x9f, 0xff, 0xff, 0xff, 0xf9, 0xff, 0x3f, 0x7f, 0xfe, 0x01, 0x80, 0x00,
  0x00, 0x01, 0xff, 0xff, 0xcf, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x7f, 0x7f, 0xff, 0x0f, 0x80, 0x00,
  0x00, 0x01, 0xff, 0xff, 0xe7, 0xff, 0xff, 0xff, 0xff, 0xfd, 0xfe, 0xff, 0xff, 0x9f, 0x80, 0x00,
  0x00, 0x01, 0xff, 0xff, 0xf9, 0xf8, 0xfc, 0x7f, 0xff, 0xf3, 0xfd, 0xff, 0xff, 0xe7, 0x80, 0x00,
  0x00, 0x01, 0xff, 0xff, 0xfc, 0x03, 0xff, 0xf9, 0xff, 0xe7, 0xff, 0xff, 0xff, 0xf8, 0x80, 0x00,
  0x00, 0x01, 0xff, 0xff, 0xff, 0x9c, 0x7e, 0xfe, 0xff, 0x8f, 0xff, 0xff, 0xff, 0xfe, 0x00, 0x00,
  0x00, 0x01, 0xff, 0xff, 0xff, 0xf1, 0xfd, 0xfe, 0xfe, 0x3f, 0xff, 0xff, 0xe1, 0x80, 0x00, 0x00,
  0x00, 0x01, 0xff, 0xff, 0xff, 0xf3, 0xff, 0xff, 0xf0, 0xff, 0xff, 0xfc, 0xff, 0xc0, 0x00, 0x00,
  0x00, 0x01, 0xff, 0xff, 0xff, 0xf3, 0xff, 0xff, 0x87, 0xff, 0xff, 0xc7, 0xfe, 0x00, 0x00, 0x00,
  0x00, 0x01, 0xff, 0xff, 0xff, 0xf9, 0xff, 0xf0, 0x1f, 0xff, 0xfe, 0x3c, 0x71, 0xcf, 0x80, 0x00,
  0x00, 0x01, 0xff, 0xff, 0xff, 0xfc, 0xff, 0x3c, 0xff, 0xff, 0xf1, 0xff, 0xe7, 0x7f, 0x80, 0x00,
  0x00, 0x01, 0xff, 0xff, 0xff, 0xfe, 0x00, 0xe0, 0x00, 0x7f, 0x03, 0xc4, 0x9c, 0xff, 0x80, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

const unsigned char pedang [] PROGMEM = {
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xef, 0xff, 0xff, 0xff, 0xfc, 0x3f, 0xff, 0xff, 0xff, 0xf7, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0x87, 0xff, 0xff, 0xff, 0xfc, 0x3f, 0xff, 0xff, 0xff, 0xe1, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0x83, 0xff, 0xff, 0xff, 0xfc, 0x3f, 0xff, 0xff, 0xff, 0xc1, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0x81, 0xff, 0xff, 0xff, 0xfc, 0x3f, 0xff, 0xff, 0xff, 0x81, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0x81, 0xff, 0xff, 0xff, 0xfc, 0x3f, 0xff, 0xff, 0xff, 0x83, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xc0, 0xff, 0xff, 0xff, 0xfc, 0x3f, 0xff, 0xff, 0xff, 0x03, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xc0, 0x7f, 0xff, 0xff, 0xfc, 0x3f, 0xff, 0xff, 0xfe, 0x03, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xc0, 0x3f, 0xff, 0xff, 0xfc, 0x3f, 0xff, 0xff, 0xfc, 0x03, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xe0, 0x1f, 0xff, 0xff, 0xfc, 0x3f, 0xff, 0xff, 0xf8, 0x07, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xe0, 0x0f, 0xff, 0xff, 0xfc, 0x3f, 0xff, 0xff, 0xf0, 0x07, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xe0, 0x0f, 0xff, 0xff, 0xf8, 0x1f, 0xff, 0xff, 0xf0, 0x07, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xc7, 0xf0, 0x07, 0xff, 0xfe, 0x00, 0x00, 0x7f, 0xff, 0xe0, 0x0f, 0xe3, 0xff, 0xff, 
	0xff, 0xff, 0xc3, 0xf0, 0x03, 0xff, 0xc0, 0x00, 0x00, 0x03, 0xff, 0xc0, 0x0f, 0xc3, 0xff, 0xff, 
	0xff, 0xff, 0xc0, 0xf0, 0x01, 0xff, 0xbf, 0xf0, 0x0f, 0xfd, 0xff, 0x80, 0x0f, 0x03, 0xff, 0xff, 
	0xff, 0xff, 0xe0, 0x78, 0x00, 0xff, 0xff, 0xf0, 0x0f, 0xff, 0xff, 0x00, 0x1e, 0x07, 0xff, 0xff, 
	0xff, 0xff, 0xe0, 0x38, 0x00, 0x7f, 0xff, 0xf0, 0x0f, 0xff, 0xfe, 0x00, 0x1c, 0x07, 0xff, 0xff, 
	0xff, 0xff, 0xf0, 0x1e, 0x00, 0x7f, 0xff, 0xf0, 0x0f, 0xff, 0xfe, 0x00, 0x78, 0x0f, 0xff, 0xff, 
	0xff, 0xff, 0xf0, 0x0f, 0x00, 0x3f, 0xff, 0xf0, 0x0f, 0xff, 0xfc, 0x00, 0xe0, 0x1f, 0xff, 0xff, 
	0xff, 0xff, 0xf8, 0x03, 0x80, 0x1f, 0xff, 0xf0, 0x0f, 0xff, 0xf8, 0x01, 0xc0, 0x1f, 0xff, 0xff, 
	0xff, 0xff, 0xfc, 0x01, 0xc0, 0x0f, 0xff, 0xf0, 0x0f, 0xff, 0xf0, 0x03, 0x80, 0x3f, 0xff, 0xff, 
	0xff, 0xff, 0xfc, 0x00, 0xf0, 0x07, 0xff, 0xf0, 0x0f, 0xff, 0xe0, 0x0f, 0x00, 0x3f, 0xff, 0xff, 
	0xff, 0xff, 0xfe, 0x00, 0x78, 0x03, 0xff, 0xf0, 0x0f, 0xff, 0xc0, 0x1e, 0x00, 0x7f, 0xff, 0xff, 
	0xff, 0xff, 0xfe, 0x00, 0x1c, 0x03, 0xff, 0xf0, 0x0f, 0xff, 0xc0, 0x38, 0x00, 0x7f, 0xff, 0xff, 
	0xff, 0xff, 0x1f, 0x00, 0x0e, 0x01, 0xff, 0xf0, 0x0f, 0xff, 0x80, 0x70, 0x00, 0xf8, 0xff, 0xff, 
	0xff, 0xfe, 0x0f, 0x80, 0x07, 0x80, 0xff, 0xf0, 0x0f, 0xff, 0x01, 0xe0, 0x01, 0xe0, 0x7f, 0xff, 
	0xff, 0xff, 0x03, 0xc0, 0x03, 0xc0, 0x7f, 0xf0, 0x0f, 0xfe, 0x03, 0xc0, 0x03, 0xc0, 0xff, 0xff, 
	0xff, 0xff, 0x80, 0xf0, 0x01, 0xe0, 0x3f, 0xf0, 0x0f, 0xfc, 0x07, 0x00, 0x0f, 0x01, 0xff, 0xff, 
	0xff, 0xff, 0xc0, 0x38, 0x00, 0x70, 0x3f, 0xf0, 0x0f, 0xfc, 0x0e, 0x00, 0x1c, 0x03, 0xff, 0xff, 
	0xff, 0xff, 0xe0, 0x1e, 0x00, 0x3c, 0x7f, 0xf0, 0x0f, 0xfe, 0x3c, 0x00, 0x78, 0x07, 0xff, 0xff, 
	0xff, 0xff, 0xf0, 0x07, 0x80, 0x1e, 0x7f, 0xf0, 0x0f, 0xfe, 0x78, 0x01, 0xe0, 0x0f, 0xff, 0xff, 
	0xff, 0xff, 0xf8, 0x01, 0xc0, 0x0f, 0x7f, 0xf0, 0x0f, 0xfe, 0xf0, 0x03, 0x80, 0x1f, 0xff, 0xff, 
	0xff, 0xff, 0xfc, 0x00, 0xf0, 0x03, 0xff, 0xf0, 0x0f, 0xff, 0xc0, 0x0f, 0x00, 0x3f, 0xff, 0xff, 
	0xff, 0xff, 0xfe, 0x00, 0x3c, 0x01, 0xff, 0xf0, 0x0f, 0xff, 0x80, 0x3c, 0x00, 0x7f, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0x00, 0x0f, 0x00, 0xff, 0xf0, 0x0f, 0xff, 0x00, 0xf0, 0x00, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0x80, 0x03, 0x80, 0x7f, 0xf0, 0x0f, 0xfe, 0x01, 0xc0, 0x01, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xc0, 0x01, 0xe0, 0x3f, 0xf0, 0x0f, 0xfc, 0x07, 0x80, 0x03, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xf3, 0xe0, 0x00, 0x78, 0x3f, 0xf0, 0x0f, 0xfc, 0x1e, 0x00, 0x07, 0xcf, 0xff, 0xff, 
	0xff, 0xff, 0xe0, 0xf8, 0x00, 0x1e, 0x1f, 0xf0, 0x0f, 0xf8, 0x78, 0x00, 0x1f, 0x07, 0xff, 0xff, 
	0xff, 0xff, 0xf0, 0x1e, 0x00, 0x0f, 0x1f, 0xf0, 0x0f, 0xf8, 0xf0, 0x00, 0x78, 0x0f, 0xff, 0xff, 
	0xff, 0xff, 0xf8, 0x07, 0xc0, 0x03, 0xdf, 0xf0, 0x0f, 0xfb, 0xc0, 0x03, 0xe0, 0x1f, 0xff, 0xff, 
	0xff, 0xff, 0xfe, 0x01, 0xf0, 0x00, 0xff, 0xf0, 0x0f, 0xff, 0x00, 0x0f, 0x80, 0x7f, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0x00, 0x3c, 0x00, 0x7f, 0xf0, 0x0f, 0xfc, 0x00, 0x3c, 0x00, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0x80, 0x0f, 0x80, 0x1f, 0xf0, 0x0f, 0xf8, 0x01, 0xf0, 0x01, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xe0, 0x03, 0xe0, 0x07, 0xf0, 0x0f, 0xe0, 0x07, 0x80, 0x07, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xf0, 0x00, 0x7c, 0x03, 0xf0, 0x1f, 0xc0, 0x3e, 0x00, 0x0f, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xf8, 0x00, 0x1f, 0x03, 0xf8, 0x1f, 0xc0, 0xf8, 0x00, 0x1f, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xfe, 0x00, 0x03, 0xc3, 0xf8, 0x1f, 0xc7, 0xc0, 0x00, 0x7f, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0xf9, 0xf8, 0x1f, 0x9f, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0x80, 0x00, 0x3f, 0xf8, 0x1f, 0xfc, 0x00, 0x01, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xf0, 0x00, 0x07, 0xf8, 0x1f, 0xe0, 0x00, 0x0f, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x01, 0xf8, 0x1f, 0x80, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x00, 0x78, 0x1e, 0x00, 0x07, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x00, 0x78, 0x1e, 0x00, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x3c, 0x3c, 0x03, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x3c, 0x3c, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xbc, 0x3d, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff
};

void setupOLED() {
  if (!display.begin(SSD1306_SWITCHCAPVCC, SCREEN_ADDRESS)) {
    Serial.println("OLED tidak ditemukan!");
    while (1)
      ;
  }
  display.clearDisplay();
  display.drawBitmap(0, 0,logo,128,64, 1);
  display.display();
  delay(5000);
  display.clearDisplay();
  display.drawBitmap(0, 0,pedang,128,64, 1);
  display.display();
  delay(5000);

  display.clearDisplay();
  display.setTextSize(1);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0, 30);
  display.println("Inisialisasi");
  display.println("Sistem");
  display.display();
  delay(5000);

  display.clearDisplay();
  display.println("Inisialisasi OLED");
  display.display();
  delay(3000);
  display.println("OLED siap.");
  display.display();
  delay(2000);
}
void perkenalan() {

  display.clearDisplay();
  display.setTextSize(2);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(33, 30);
  display.println("SISTEM");
  display.setCursor(43, 50);
  display.println("SIAP");
  display.display();
  delay(3000);

  display.clearDisplay();
  display.setCursor(5, 30);
  display.println("WELCOME TO");
  display.setCursor(20, 50);
  display.println("OUR TEAM");
  display.display();
  delay(3000);

  display.clearDisplay();
  display.setTextSize(2);
  display.setCursor(40, 10);
  display.println("HADI");
  display.setCursor(40, 30);
  display.println("RIKA");
  display.setCursor(35, 50);
  display.println("RIZKY");
  display.display();
  delay(3000);

  display.clearDisplay();
  display.setTextSize(2);
  display.setCursor(50, 30);
  display.println("WE");
  display.setCursor(45, 50);
  display.println("ARE");
  display.display();
  delay(3000);

  display.clearDisplay();
  display.setTextSize(2);
  display.setCursor(40, 30);
  display.println("FIRE");
  display.setCursor(35, 50);
  display.println("NEXUS");
  display.display();
  delay(3000);
}
void displayData() {
  char buffer[25];
  sprintf(buffer, "%4d/%02d/%02d %02d:%02d:%02d",
          now.year(), now.month(), now.day(),
          now.hour(), now.minute(), now.second());

  display.clearDisplay();
  display.setTextSize(1);
  display.setCursor(0, 0);
  display.println(buffer);

  display.setCursor(0, 16);
  display.print("Suhu: ");
  display.print(t);
  display.print((char)247);
  display.println(" C");

  display.setCursor(0, 32);
  display.print("Kelembapan: ");
  display.print(h);
  display.println(" %");
  display.display();

 if (tampilkanNotif) {  // Memeriksa apakah variabel `tampilkanNotif` bernilai true. Jika ya, berarti notifikasi harus ditampilkan di layar.
    display.setCursor(0, 50); // Mengatur posisi kursor di layar OLED pada koordinat x=0, y=50 (dekat bagian bawah layar).
    display.println(notifPesan);  // Menampilkan teks yang disimpan dalam variabel `notifPesan` di layar OLED pada posisi kursor saat ini.
    if (millis() - notifTersimpan >= 2000) { // Memeriksa apakah waktu yang telah berlalu sejak `notifTersimpan` lebih besar atau sama dengan 2000 milidetik (2 detik).
        tampilkanNotif = false; // Jika notifikasi telah ditampilkan selama 2 detik, set `tampilkanNotif` menjadi false untuk menyembunyikan notifikasi.
    }
    notifTersimpan = millis(); 
}
  display.display();
  delay(1000);
}