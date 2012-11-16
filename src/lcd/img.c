#include "img.h"


const unsigned char img_station[3][4*32] =
{
  { 0x30,0x00,0x00,0x00,
    0x30,0x00,0x00,0x00,
    0x20,0x00,0x00,0x00,
    0x20,0x00,0x00,0x00,
    0x20,0x00,0x00,0x00,
    0x60,0x00,0x00,0x00,
    0x40,0x00,0x00,0x00,
    0x40,0x00,0x00,0x00,
    0x40,0xff,0xff,0x00,
    0xc0,0xff,0xff,0x01,
    0xc0,0x01,0x80,0x01,
    0xc0,0x00,0x00,0x03,
    0xf8,0xff,0xff,0x1f,
    0xfc,0xff,0xff,0x3f,
    0x0c,0x00,0x00,0x30,
    0x0c,0x00,0x00,0x30,
    0x0c,0x00,0x00,0x30,
    0x8c,0x3f,0xf8,0x30,
    0x4c,0x40,0x04,0x31,
    0x4c,0x55,0x76,0x33,
    0x4c,0x40,0xda,0x32,
    0x8c,0x3f,0xaa,0x32,
    0x0c,0x00,0xaa,0x32,
    0x0c,0x00,0xda,0x32,
    0x0c,0x00,0x76,0x33,
    0xcc,0x54,0x04,0x31,
    0xcc,0x54,0xf8,0x30,
    0x0c,0x00,0x00,0x30,
    0x0c,0x00,0x00,0x30,
    0x0c,0x00,0x00,0x30,
    0xfc,0xff,0xff,0x3f,
    0xf8,0xff,0xff,0x1f },

  { 0x60,0x00,0x00,0x00,
    0x60,0x00,0x00,0x00,
    0x40,0x00,0x00,0x00,
    0x40,0x00,0x00,0x00,
    0xc0,0x00,0x00,0x00,
    0x80,0x00,0x00,0x00,
    0x80,0x00,0x00,0x00,
    0x80,0xfe,0xff,0x00,
    0x80,0xff,0xff,0x01,
    0x80,0x03,0x80,0x01,
    0x80,0x01,0x00,0x03,
    0xf0,0xff,0xff,0x1f,
    0xf8,0xff,0xff,0x3f,
    0x18,0x00,0x00,0x30,
    0x18,0x00,0x00,0x30,
    0x18,0x7f,0xf0,0x30,
    0x98,0x80,0x08,0x31,
    0x98,0xaa,0x6c,0x33,
    0x98,0x80,0x94,0x32,
    0x18,0x7f,0x94,0x32,
    0x18,0x00,0x94,0x32,
    0x18,0x00,0x6c,0x33,
    0x98,0xa9,0x08,0x31,
    0x98,0xa9,0xf0,0x30,
    0x18,0x00,0x00,0x30,
    0x18,0x00,0x00,0x30,
    0xf8,0xff,0xff,0x3f,
    0xf0,0xff,0xff,0x1f,
    0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00 },

  { 0x80,0x01,0x00,0x00,
    0x00,0x01,0x00,0x00,
    0x00,0x01,0x00,0x00,
    0x00,0x03,0x00,0x00,
    0x00,0x02,0x00,0x00,
    0x00,0x02,0x00,0x00,
    0x00,0xfe,0xff,0x01,
    0x00,0xfe,0xff,0x03,
    0x00,0x06,0x00,0x06,
    0x80,0xff,0xff,0x1f,
    0xc0,0xff,0xff,0x3f,
    0xc0,0x00,0x00,0x30,
    0xc0,0x00,0x00,0x30,
    0xc0,0xf8,0xc1,0x31,
    0xc0,0x54,0x22,0x32,
    0xc0,0xa4,0x52,0x35,
    0xc0,0xf8,0x91,0x34,
    0xc0,0x00,0x50,0x35,
    0xc0,0x00,0x20,0x32,
    0xc0,0xa4,0xc2,0x31,
    0xc0,0x00,0x00,0x30,
    0xc0,0x00,0x00,0x30,
    0xc0,0xff,0xff,0x3f,
    0x80,0xff,0xff,0x1f,
    0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00 },
};


const unsigned char img_share[3][4*32] =
{
  { 0xc0,0xff,0xff,0x03,
    0xe0,0xff,0xff,0x07,
    0x70,0x00,0x00,0x0e,
    0x30,0x30,0x00,0x0c,
    0x30,0x38,0x00,0x0c,
    0x30,0x2c,0x00,0x0c,
    0x30,0x26,0x00,0x0c,
    0x30,0x20,0x00,0x0c,
    0x30,0x20,0x00,0x0c,
    0x30,0x20,0x00,0x0c,
    0x30,0x20,0x00,0x0c,
    0x30,0x20,0x00,0x0c,
    0x30,0x20,0x0e,0x0c,
    0x30,0xa0,0x3f,0x0c,
    0x30,0xe0,0x7f,0x0c,
    0x30,0xc0,0x7f,0x0c,
    0x30,0x80,0x3f,0x0c,
    0x30,0x00,0x0e,0x0c,
    0x70,0x00,0x00,0x0e,
    0xf0,0xff,0xff,0x0f,
    0xe0,0xff,0xff,0x07,
    0xfc,0xff,0xff,0x3f,
    0xfc,0xff,0xff,0x3f,
    0x0c,0x00,0x00,0x30,
    0x0c,0x00,0x00,0x30,
    0x8c,0x00,0xff,0x33,
    0xcc,0x01,0xff,0x33,
    0x8c,0x00,0x30,0x30,
    0x0c,0x00,0x00,0x30,
    0x0c,0x00,0x00,0x30,
    0xfc,0xff,0xff,0x3f,
    0xfc,0xff,0xff,0x3f },

  { 0x00,0xff,0xff,0x03,
    0x80,0xff,0xff,0x07,
    0xc0,0x01,0x00,0x0e,
    0xc0,0x60,0x00,0x0c,
    0xc0,0x70,0x00,0x0c,
    0xc0,0x58,0x00,0x0c,
    0xc0,0x48,0x00,0x0c,
    0xc0,0x40,0x00,0x0c,
    0xc0,0x40,0x00,0x0c,
    0xc0,0x40,0x00,0x0c,
    0xc0,0x40,0x0c,0x0c,
    0xc0,0x40,0x3f,0x0c,
    0xc0,0xc0,0x7f,0x0c,
    0xc0,0x80,0x7f,0x0c,
    0xc0,0x00,0x3f,0x0c,
    0xc0,0x00,0x0c,0x0c,
    0xc0,0x01,0x00,0x0e,
    0xc0,0xff,0xff,0x0f,
    0x80,0xff,0xff,0x07,
    0xf0,0xff,0xff,0x3f,
    0xf0,0xff,0xff,0x3f,
    0x30,0x00,0x00,0x30,
    0x30,0x02,0xff,0x33,
    0x30,0x07,0xff,0x33,
    0x30,0x02,0x30,0x30,
    0x30,0x00,0x00,0x30,
    0xf0,0xff,0xff,0x3f,
    0xf0,0xff,0xff,0x3f,
    0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00 },

  { 0x00,0xf8,0xff,0x07,
    0x00,0xfc,0xff,0x0f,
    0x00,0x1c,0x00,0x0e,
    0x00,0x0c,0x02,0x0c,
    0x00,0x0c,0x03,0x0c,
    0x00,0x8c,0x02,0x0c,
    0x00,0x4c,0x02,0x0c,
    0x00,0x0c,0x02,0x0c,
    0x00,0x0c,0x02,0x0c,
    0x00,0x0c,0x3a,0x0c,
    0x00,0x0c,0x7e,0x0c,
    0x00,0x0c,0x7c,0x0c,
    0x00,0x0c,0x38,0x0c,
    0x00,0x1c,0x00,0x0e,
    0x00,0xfc,0xff,0x0f,
    0x00,0xf8,0xff,0x07,
    0x00,0xff,0xff,0x3f,
    0x00,0xff,0xff,0x3f,
    0x00,0x03,0x00,0x30,
    0x00,0x33,0xf8,0x37,
    0x00,0x33,0xc0,0x30,
    0x00,0x03,0x00,0x30,
    0x00,0xff,0xff,0x3f,
    0x00,0xff,0xff,0x3f,
    0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00 },
};


const unsigned char img_card[3][4*32] =
{
  { 0x00,0xfc,0xff,0x0f,
    0x00,0xfe,0xff,0x0f,
    0x00,0x03,0x00,0x0c,
    0x80,0x01,0x00,0x0c,
    0xc0,0x00,0x00,0x0c,
    0x60,0x00,0x00,0x0c,
    0x30,0x00,0x00,0x0c,
    0x30,0x00,0x00,0x0c,
    0x30,0x00,0x00,0x0c,
    0x30,0x18,0x00,0x0c,
    0x30,0x1c,0x00,0x0c,
    0x30,0x16,0x00,0x0c,
    0x30,0x13,0x00,0x0c,
    0x30,0x10,0x00,0x0c,
    0x30,0x10,0x00,0x0c,
    0x30,0x10,0x00,0x0c,
    0x30,0x10,0x00,0x0c,
    0x30,0x10,0x00,0x0c,
    0x30,0x10,0x07,0x0c,
    0x30,0xd0,0x1f,0x0c,
    0x30,0xf0,0x3f,0x0c,
    0x30,0xe0,0x3f,0x0c,
    0x30,0xc0,0x1f,0x0c,
    0x30,0x00,0x07,0x0c,
    0x30,0x00,0x00,0x0c,
    0x30,0x00,0x00,0x0c,
    0x30,0x00,0x00,0x0c,
    0x30,0x00,0x00,0x0c,
    0x30,0x00,0x00,0x0c,
    0x30,0x00,0x00,0x0c,
    0xf0,0xff,0xff,0x0f,
    0xf0,0xff,0xff,0x0f },

  { 0x00,0xf0,0xff,0x0f,
    0x00,0xf8,0xff,0x0f,
    0x00,0x0c,0x00,0x0c,
    0x00,0x06,0x00,0x0c,
    0x00,0x03,0x00,0x0c,
    0x80,0x01,0x00,0x0c,
    0x80,0x01,0x00,0x0c,
    0x80,0x61,0x00,0x0c,
    0x80,0x71,0x00,0x0c,
    0x80,0x59,0x00,0x0c,
    0x80,0x49,0x00,0x0c,
    0x80,0x41,0x00,0x0c,
    0x80,0x41,0x00,0x0c,
    0x80,0x41,0x00,0x0c,
    0x80,0x41,0x00,0x0c,
    0x80,0x41,0x0c,0x0c,
    0x80,0x41,0x3f,0x0c,
    0x80,0xc1,0x7f,0x0c,
    0x80,0x81,0x7f,0x0c,
    0x80,0x01,0x3f,0x0c,
    0x80,0x01,0x0c,0x0c,
    0x80,0x01,0x00,0x0c,
    0x80,0x01,0x00,0x0c,
    0x80,0x01,0x00,0x0c,
    0x80,0x01,0x00,0x0c,
    0x80,0x01,0x00,0x0c,
    0x80,0xff,0xff,0x0f,
    0x80,0xff,0xff,0x0f,
    0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00 },

  { 0x00,0xc0,0xff,0x0f,
    0x00,0xe0,0xff,0x0f,
    0x00,0x30,0x00,0x0c,
    0x00,0x18,0x00,0x0c,
    0x00,0x0c,0x00,0x0c,
    0x00,0x0c,0x00,0x0c,
    0x00,0x0c,0x01,0x0c,
    0x00,0x8c,0x01,0x0c,
    0x00,0x4c,0x01,0x0c,
    0x00,0x2c,0x01,0x0c,
    0x00,0x0c,0x01,0x0c,
    0x00,0x0c,0x01,0x0c,
    0x00,0x0c,0x01,0x0c,
    0x00,0x0c,0x3d,0x0c,
    0x00,0x0c,0x7f,0x0c,
    0x00,0x0c,0xff,0x0c,
    0x00,0x0c,0x7e,0x0c,
    0x00,0x0c,0x3c,0x0c,
    0x00,0x0c,0x00,0x0c,
    0x00,0x0c,0x00,0x0c,
    0x00,0x0c,0x00,0x0c,
    0x00,0x0c,0x00,0x0c,
    0x00,0xfc,0xff,0x0f,
    0x00,0xfc,0xff,0x0f,
    0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00 },
};


const unsigned char img_clock[3][4*32] =
{
  { 0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,
    0x00,0xe0,0x07,0x00,
    0x00,0xfc,0x3f,0x00,
    0x00,0xff,0xff,0x00,
    0x80,0x07,0xe0,0x01,
    0xc0,0x81,0x81,0x03,
    0xe0,0x80,0x01,0x07,
    0x70,0x80,0x01,0x0e,
    0x38,0x02,0xc0,0x1c,
    0x18,0x04,0x60,0x18,
    0x18,0x00,0x30,0x18,
    0x0c,0x10,0x18,0x30,
    0x0c,0x30,0x0c,0x30,
    0x0c,0x60,0x06,0x30,
    0xec,0xc0,0x03,0x37,
    0xec,0x80,0x01,0x37,
    0x0c,0x00,0x00,0x30,
    0x0c,0x00,0x00,0x30,
    0x0c,0x00,0x00,0x30,
    0x18,0x00,0x00,0x18,
    0x18,0x02,0x20,0x18,
    0x38,0x01,0x40,0x1c,
    0x70,0x80,0x01,0x0e,
    0xe0,0x80,0x01,0x07,
    0xc0,0x81,0x81,0x03,
    0x80,0x07,0xe0,0x01,
    0x00,0xff,0xff,0x00,
    0x00,0xfc,0x3f,0x00,
    0x00,0xe0,0x07,0x00,
    0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00 },

  { 0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,
    0x00,0xc0,0x0f,0x00,
    0x00,0xf8,0x7f,0x00,
    0x00,0xfe,0xff,0x01,
    0x00,0x0f,0xc0,0x03,
    0x80,0x03,0x03,0x07,
    0xc0,0x01,0x03,0x0e,
    0xc0,0x04,0x83,0x0c,
    0x60,0x08,0xc0,0x18,
    0x60,0x00,0x60,0x18,
    0x70,0x20,0x30,0x38,
    0x30,0x60,0x18,0x30,
    0x30,0xc0,0x0c,0x30,
    0xb0,0x83,0x07,0x37,
    0xb0,0x03,0x03,0x37,
    0x30,0x00,0x00,0x30,
    0x30,0x00,0x00,0x30,
    0x70,0x00,0x00,0x38,
    0x60,0x00,0x00,0x18,
    0x60,0x08,0x40,0x18,
    0xc0,0x04,0x83,0x0c,
    0xc0,0x01,0x03,0x0e,
    0x80,0x03,0x03,0x07,
    0x00,0x0f,0xc0,0x03,
    0x00,0xfe,0xff,0x01,
    0x00,0xf8,0x7f,0x00,
    0x00,0xc0,0x0f,0x00,
    0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00 },

  { 0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,
    0x00,0x00,0x3f,0x00,
    0x00,0xc0,0xff,0x00,
    0x00,0xf0,0xff,0x03,
    0x00,0x78,0x80,0x07,
    0x00,0x1c,0x0c,0x0e,
    0x00,0x0e,0x0c,0x1c,
    0x00,0x46,0x80,0x19,
    0x00,0x07,0xc0,0x38,
    0x00,0x83,0x61,0x30,
    0x00,0x03,0x33,0x30,
    0x00,0x1b,0x1e,0x36,
    0x00,0x1b,0x0c,0x36,
    0x00,0x03,0x00,0x30,
    0x00,0x03,0x00,0x30,
    0x00,0x07,0x00,0x38,
    0x00,0x26,0x80,0x18,
    0x00,0x0e,0x0c,0x1c,
    0x00,0x1c,0x0c,0x0e,
    0x00,0x78,0x80,0x07,
    0x00,0xf0,0xff,0x03,
    0x00,0xc0,0xff,0x00,
    0x00,0x00,0x3f,0x00,
    0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00 },
};


const unsigned char img_settings[3][4*32] =
{
  { 0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,
    0xe0,0x03,0x1f,0x00,
    0xc0,0x87,0x3f,0x00,
    0x80,0xcd,0x61,0x00,
    0x04,0x0d,0xc7,0x01,
    0x8c,0x0d,0x8c,0x03,
    0xdc,0x0c,0x18,0x03,
    0x7c,0x0c,0x30,0x06,
    0x0c,0x18,0x70,0x0c,
    0xf8,0x33,0xf8,0x18,
    0xf0,0x67,0xbc,0x31,
    0x00,0xcc,0x1f,0x33,
    0x00,0x98,0x0d,0x1e,
    0x00,0xf0,0x0c,0x0c,
    0x00,0x60,0x06,0x00,
    0x00,0x30,0x0f,0x00,
    0x00,0x98,0x19,0x00,
    0x00,0xcc,0x33,0x00,
    0x00,0x66,0x66,0x00,
    0x00,0x33,0xcc,0x0f,
    0x80,0x19,0x98,0x1f,
    0xc0,0x0c,0x30,0x30,
    0x60,0x06,0x30,0x3e,
    0x30,0x03,0x30,0x3b,
    0x98,0x01,0xb0,0x31,
    0xcc,0x00,0xb0,0x20,
    0x6c,0x00,0xb0,0x01,
    0x3c,0x00,0xe0,0x03,
    0x18,0x00,0x80,0x07,
    0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00 },

  { 0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,
    0x80,0x03,0x3e,0x00,
    0x00,0x0f,0x7f,0x00,
    0x00,0x9e,0xc3,0x00,
    0x10,0x1a,0x8e,0x03,
    0x30,0x1b,0x18,0x07,
    0xf0,0x19,0x30,0x06,
    0x60,0x30,0x60,0x0c,
    0xe0,0x63,0xf0,0x18,
    0xc0,0xcf,0xf8,0x31,
    0x00,0x98,0x3f,0x33,
    0x00,0x30,0x1b,0x1e,
    0x00,0xe0,0x19,0x0c,
    0x00,0xc0,0x0c,0x00,
    0x00,0x60,0x1e,0x00,
    0x00,0x30,0x33,0x00,
    0x00,0x98,0x67,0x00,
    0x00,0xcc,0xcc,0x0f,
    0x00,0x66,0x18,0x1f,
    0x00,0x33,0x30,0x18,
    0x80,0x19,0x60,0x3e,
    0xc0,0x0c,0x60,0x33,
    0x60,0x06,0x60,0x21,
    0x30,0x03,0xe0,0x01,
    0x98,0x01,0xc0,0x03,
    0xf8,0x00,0x00,0x07,
    0x70,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00 },

  { 0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,
    0x00,0x38,0x78,0x00,
    0x00,0x70,0xfc,0x00,
    0x00,0xe0,0x98,0x03,
    0x00,0xa1,0x30,0x07,
    0x00,0xb3,0x60,0x06,
    0x00,0x9f,0xc0,0x0c,
    0x00,0x86,0xe1,0x19,
    0x00,0x7c,0x7b,0x33,
    0x00,0xc0,0x2e,0x1e,
    0x00,0x80,0x37,0x0c,
    0x00,0x00,0x1b,0x00,
    0x00,0x80,0x3d,0x00,
    0x00,0xc0,0x6e,0x00,
    0x00,0x60,0xdb,0x00,
    0x00,0xb0,0xb1,0x0f,
    0x00,0xd8,0x60,0x18,
    0x00,0x6c,0x40,0x3e,
    0x00,0x36,0x40,0x33,
    0x00,0x1b,0x40,0x21,
    0x80,0x0d,0xc0,0x01,
    0x80,0x07,0x80,0x03,
    0x00,0x03,0x00,0x07,
    0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00 },
};


const unsigned char img_back[3][4*32] =
{
  { 0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,
    0xf0,0xff,0xff,0x0f,
    0xf8,0xff,0xff,0x1f,
    0x1c,0x00,0x00,0x38,
    0x0c,0x00,0x00,0x30,
    0x0c,0x80,0x01,0x30,
    0x0c,0x80,0x03,0x30,
    0x0c,0x80,0x07,0x30,
    0x0c,0x80,0x0f,0x30,
    0x0c,0x80,0x1d,0x30,
    0x0c,0x80,0x39,0x30,
    0x8c,0xff,0x71,0x30,
    0xcc,0xff,0xe0,0x30,
    0xcc,0x00,0xc0,0x31,
    0xcc,0x00,0x80,0x33,
    0xcc,0x00,0x80,0x33,
    0xcc,0x00,0xc0,0x31,
    0xcc,0xff,0xe0,0x30,
    0x8c,0xff,0x71,0x30,
    0x0c,0x80,0x39,0x30,
    0x0c,0x80,0x1d,0x30,
    0x0c,0x80,0x0f,0x30,
    0x0c,0x80,0x07,0x30,
    0x0c,0x80,0x03,0x30,
    0x0c,0x80,0x01,0x30,
    0x0c,0x00,0x00,0x30,
    0x1c,0x00,0x00,0x38,
    0xf8,0xff,0xff,0x1f,
    0xf0,0xff,0xff,0x0f,
    0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00 },

  { 0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,
    0xc0,0xff,0xff,0x0f,
    0xe0,0xff,0xff,0x1f,
    0x70,0x00,0x00,0x38,
    0x30,0x00,0x00,0x30,
    0x30,0x00,0x03,0x30,
    0x30,0x00,0x07,0x30,
    0x30,0x00,0x0f,0x30,
    0x30,0x00,0x1f,0x30,
    0x30,0x00,0x3b,0x30,
    0x30,0xfe,0x73,0x30,
    0x30,0xff,0xe1,0x30,
    0x30,0x03,0xc0,0x31,
    0x30,0x03,0x80,0x33,
    0x30,0x03,0x80,0x33,
    0x30,0x03,0xc0,0x31,
    0x30,0xff,0xe1,0x30,
    0x30,0xfe,0x73,0x30,
    0x30,0x00,0x3b,0x30,
    0x30,0x00,0x1f,0x30,
    0x30,0x00,0x0f,0x30,
    0x30,0x00,0x07,0x30,
    0x30,0x00,0x03,0x30,
    0x30,0x00,0x00,0x30,
    0x70,0x00,0x00,0x38,
    0xe0,0xff,0xff,0x1f,
    0xc0,0xff,0xff,0x0f,
    0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00 },

  { 0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,
    0x00,0xfe,0xff,0x1f,
    0x00,0xff,0xff,0x3f,
    0x00,0x03,0x00,0x30,
    0x00,0x03,0x00,0x30,
    0x00,0x03,0x0c,0x30,
    0x00,0x03,0x1c,0x30,
    0x00,0x03,0x3c,0x30,
    0x00,0x03,0x7c,0x30,
    0x00,0xe3,0xef,0x30,
    0x00,0xf3,0xc7,0x31,
    0x00,0x33,0x80,0x33,
    0x00,0x33,0x80,0x33,
    0x00,0xf3,0xc7,0x31,
    0x00,0xe3,0xef,0x30,
    0x00,0x03,0x7c,0x30,
    0x00,0x03,0x3c,0x30,
    0x00,0x03,0x1c,0x30,
    0x00,0x03,0x0c,0x30,
    0x00,0x03,0x00,0x30,
    0x00,0x03,0x00,0x30,
    0x00,0xff,0xff,0x3f,
    0x00,0xfe,0xff,0x1f,
    0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00 },
};


const unsigned char img_power[3][4*32] =
{
  { 0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,
    0xf0,0xff,0xff,0x0f,
    0xf8,0xff,0xff,0x1f,
    0x1c,0x00,0x00,0x38,
    0x0c,0x00,0x00,0x30,
    0x0c,0x00,0x00,0x30,
    0x0c,0xe0,0x07,0x30,
    0x0c,0xf8,0x1f,0x30,
    0x0c,0x1c,0x38,0x30,
    0x0c,0x0e,0x70,0x30,
    0x0c,0x87,0xe1,0x30,
    0x0c,0x83,0xc1,0x30,
    0x8c,0x81,0x81,0x31,
    0x8c,0x81,0x81,0x31,
    0x8c,0x81,0x81,0x31,
    0x8c,0x81,0x81,0x31,
    0x8c,0x81,0x81,0x31,
    0x8c,0x81,0x81,0x31,
    0x0c,0x83,0xc1,0x30,
    0x0c,0x87,0xe1,0x30,
    0x0c,0x0e,0x70,0x30,
    0x0c,0x1c,0x38,0x30,
    0x0c,0xf8,0x1f,0x30,
    0x0c,0xe0,0x07,0x30,
    0x0c,0x00,0x00,0x30,
    0x0c,0x00,0x00,0x30,
    0x1c,0x00,0x00,0x38,
    0xf8,0xff,0xff,0x1f,
    0xf0,0xff,0xff,0x0f,
    0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00 },

  { 0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,
    0xc0,0xff,0xff,0x0f,
    0xe0,0xff,0xff,0x1f,
    0x70,0x00,0x00,0x38,
    0x30,0x00,0x00,0x30,
    0x30,0x00,0x00,0x30,
    0x30,0xc0,0x0f,0x30,
    0x30,0xf0,0x3f,0x30,
    0x30,0x38,0x70,0x30,
    0x30,0x1c,0xe0,0x30,
    0x30,0x0c,0xc3,0x30,
    0x30,0x06,0x83,0x31,
    0x30,0x06,0x83,0x31,
    0x30,0x06,0x83,0x31,
    0x30,0x06,0x83,0x31,
    0x30,0x06,0x83,0x31,
    0x30,0x06,0x83,0x31,
    0x30,0x0c,0xc3,0x30,
    0x30,0x1c,0xe0,0x30,
    0x30,0x38,0x70,0x30,
    0x30,0xf0,0x3f,0x30,
    0x30,0xc0,0x0f,0x30,
    0x30,0x00,0x00,0x30,
    0x30,0x00,0x00,0x30,
    0x70,0x00,0x00,0x38,
    0xe0,0xff,0xff,0x1f,
    0xc0,0xff,0xff,0x0f,
    0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00 },

  { 0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,
    0x00,0xfe,0xff,0x1f,
    0x00,0xff,0xff,0x3f,
    0x00,0x03,0x00,0x30,
    0x00,0x03,0x00,0x30,
    0x00,0x03,0x3f,0x30,
    0x00,0x83,0x7f,0x30,
    0x00,0xc3,0xc0,0x30,
    0x00,0x63,0x80,0x31,
    0x00,0x33,0x0c,0x33,
    0x00,0x33,0x0c,0x33,
    0x00,0x33,0x0c,0x33,
    0x00,0x33,0x0c,0x33,
    0x00,0x33,0x0c,0x33,
    0x00,0x33,0x0c,0x33,
    0x00,0x63,0x80,0x31,
    0x00,0xc3,0xc0,0x30,
    0x00,0x83,0x7f,0x30,
    0x00,0x03,0x3f,0x30,
    0x00,0x03,0x00,0x30,
    0x00,0x03,0x00,0x30,
    0x00,0xff,0xff,0x3f,
    0x00,0xfe,0xff,0x1f,
    0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00 },
};