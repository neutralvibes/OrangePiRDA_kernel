#ifndef _GC2155_CFG_H_
#define _GC2155_CFG_H_

#include "rda_sensor.h"
#include <linux/delay.h>

#ifdef BIT
#undef BIT
#endif
#define BIT	8

static struct sensor_reg exp_gc2155[][3] =
{
	{{0xfe,0x01,BIT,0},{0x13,0x15,BIT,0},{0xfe,0x00,BIT,0}},
	{{0xfe,0x01,BIT,0},{0x13,0x20,BIT,0},{0xfe,0x00,BIT,0}},
	{{0xfe,0x01,BIT,0},{0x13,0x25,BIT,0},{0xfe,0x00,BIT,0}},
	{{0xfe,0x01,BIT,0},{0x13,0x2d,BIT,0},{0xfe,0x00,BIT,0}},
	{{0xfe,0x01,BIT,0},{0x13,0x35,BIT,0},{0xfe,0x00,BIT,0}},
	{{0xfe,0x01,BIT,0},{0x13,0x40,BIT,0},{0xfe,0x00,BIT,0}},
	{{0xfe,0x01,BIT,0},{0x13,0x45,BIT,0},{0xfe,0x00,BIT,0}},
};

static struct sensor_reg awb_gc2155[][4] =
{
	{{0x42,0xfd,BIT,0},{0xb3,0x57,BIT,0},{0xb4,0x4d,BIT,0},{0xb5,0x45,BIT,0}},//OFF
	{{0x42,0xcf,BIT,0},{0xb3,0x57,BIT,0},{0xb4,0x4d,BIT,0},{0xb5,0x45,BIT,0}},//AUTO
	{{0x42,0xcd,BIT,0},{0xb3,0x50,BIT,0},{0xb4,0x40,BIT,0},{0xb5,0xa8,BIT,0}},//INCANDESCENCE:
	{{0x42,0xcd,BIT,0},{0xb3,0x72,BIT,0},{0xb4,0x40,BIT,0},{0xb5,0x5b,BIT,0}},//FLUORESCENT:
	{{0x42,0xcd,BIT,0},{0xb3,0xa0,BIT,0},{0xb4,0x45,BIT,0},{0xb5,0x40,BIT,0}},//TUNGSTEN
	{{0x42,0xcd,BIT,0},{0xb3,0x70,BIT,0},{0xb4,0x40,BIT,0},{0xb5,0x50,BIT,0}},//SUN:
	{{0x42,0xcd,BIT,0},{0xb3,0x58,BIT,0},{0xb4,0x40,BIT,0},{0xb5,0x50,BIT,0}},//CLOUD:
};

// use this for 1600x1200 (UXGA) capture
static struct sensor_reg uxga_gc2155[] =
{
	{0xfe,0x00,BIT,0},
	{0xfa,0x11,BIT,0},
	{0xfd,0x00,BIT,0},
	//// crop window
	{0xfe,0x00,BIT,0},
	{0x99,0x11,BIT,0},
	{0x9a,0x06,BIT,0},
	{0x9b,0x00,BIT,0},
	{0x9c,0x00,BIT,0},
	{0x9d,0x00,BIT,0},
	{0x9e,0x00,BIT,0},
	{0x9f,0x00,BIT,0},
	{0xa0,0x00,BIT,0},
	{0xa1,0x00,BIT,0},
	{0xa2,0x00,BIT,0},
	{0x90,0x01,BIT,0},
	{0x91,0x00,BIT,0},
	{0x92,0x00,BIT,0},
	{0x93,0x00,BIT,0},
	{0x94,0x00,BIT,0},
	{0x95,0x04,BIT,0},
	{0x96,0xb0,BIT,0},
	{0x97,0x06,BIT,0},
	{0x98,0x40,BIT,0},
	//// AWB
	{0xfe,0x00,BIT,0},
	{0xec,0x02,BIT,0},
	{0xed,0x04,BIT,0},
	{0xee,0x60,BIT,0},
	{0xef,0x90,BIT,0},
	{0xfe,0x01,BIT,0},
	{0x74,0x01,BIT,0},
	//// AEC
	{0xfe,0x01,BIT,0},
	{0x01,0x08,BIT,0},
	{0x02,0xc0,BIT,0},
	{0x03,0x04,BIT,0},
	{0x04,0x90,BIT,0},
	{0x05,0x30,BIT,0},
	{0x06,0x98,BIT,0},
	{0x07,0x28,BIT,0},
	{0x08,0x6c,BIT,0},
	{0x0a,0xc2,BIT,0},
	{0x21,0x15,BIT,0},
	{0xfe,0x00,BIT,0},
	//// gamma
	{0xfe,0x00,BIT,0},
	{0xc3,0x00,BIT,0},
	{0xc4,0x90,BIT,0},
	{0xc5,0x98,BIT,0},
	{0xfe,0x00,BIT,0},
};

// use this for 1280x720 (720p) capture
static struct sensor_reg r720p_gc2155[] =
{
	{0xfe,0x00,BIT,0},
	{0xfa,0x11,BIT,0},
	{0xfd,0x00,BIT,0},
	//// crop window
	{0xfe,0x00,BIT,0},
	{0x99,0x55,BIT,0},
	{0x9a,0x06,BIT,0},
	{0x9b,0x01,BIT,0},
	{0x9c,0x23,BIT,0},
	{0x9d,0x00,BIT,0},
	{0x9e,0x00,BIT,0},
	{0x9f,0x01,BIT,0},
	{0xa0,0x23,BIT,0},
	{0xa1,0x00,BIT,0},
	{0xa2,0x00,BIT,0},
	{0x90,0x01,BIT,0},
	{0x91,0x00,BIT,0},
	{0x92,0x78,BIT,0},
	{0x93,0x00,BIT,0},
	{0x94,0x00,BIT,0},
	{0x95,0x02,BIT,0},
	{0x96,0xd0,BIT,0},
	{0x97,0x05,BIT,0},
	{0x98,0x00,BIT,0},
	//// AWB
	{0xfe,0x00,BIT,0},
	{0xec,0x06,BIT,0},
	{0xed,0x04,BIT,0},
	{0xee,0x60,BIT,0},
	{0xef,0x90,BIT,0},
	{0xfe,0x01,BIT,0},
	{0x74,0x01,BIT,0},
	//// AEC
	{0xfe,0x01,BIT,0},
	{0x01,0x04,BIT,0},
	{0x02,0xc0,BIT,0},
	{0x03,0x04,BIT,0},
	{0x04,0x90,BIT,0},
	{0x05,0x30,BIT,0},
	{0x06,0x90,BIT,0},
	{0x07,0x30,BIT,0},
	{0x08,0x80,BIT,0},
	{0x0a,0x82,BIT,0},
	{0x21,0x15,BIT,0},
	{0xfe,0x00,BIT,0},
	//// gamma
	{0xfe,0x00,BIT,0},
	{0xc3,0x00,BIT,0},
	{0xc4,0x90,BIT,0},
	{0xc5,0x98,BIT,0},
	{0xfe,0x00,BIT,0},
};

// use this for 640x480 (VGA) capture
static struct sensor_reg vga_gc2155[] =
{
	{0xfe,0x00,BIT,0},
	{0xfa,0x00,BIT,0},
	{0xfd,0x01,BIT,0},
	//// crop window
	{0xfe,0x00,BIT,0},
	{0x90,0x01,BIT,0},
	{0x91,0x00,BIT,0},
	{0x92,0x00,BIT,0},
	{0x93,0x00,BIT,0},
	{0x94,0x00,BIT,0},
	{0x95,0x01,BIT,0},
	{0x96,0xe0,BIT,0},
	{0x97,0x02,BIT,0},
	{0x98,0x80,BIT,0},
	{0x99,0x11,BIT,0},
	{0x9a,0x06,BIT,0},
	//// AWB
	{0xfe,0x00,BIT,0},
	{0xec,0x01,BIT,0},
	{0xed,0x02,BIT,0},
	{0xee,0x30,BIT,0},
	{0xef,0x48,BIT,0},
	{0xfe,0x01,BIT,0},
	{0x74,0x00,BIT,0},
	//// AEC
	{0xfe,0x01,BIT,0},
	{0x01,0x04,BIT,0},
	{0x02,0x60,BIT,0},
	{0x03,0x02,BIT,0},
	{0x04,0x48,BIT,0},
	{0x05,0x18,BIT,0},
	{0x06,0x4c,BIT,0},
	{0x07,0x14,BIT,0},
	{0x08,0x36,BIT,0},
	{0x0a,0xc0,BIT,0},
	{0x21,0x14,BIT,0},
	{0xfe,0x00,BIT,0},
	//// gamma
	{0xfe,0x00,BIT,0},
	{0xc3,0x11,BIT,0},
	{0xc4,0x20,BIT,0},
	{0xc5,0x30,BIT,0},
	{0xfe,0x00,BIT,0},
};

// use this for init sensor
static struct sensor_reg init_gc2155[] =
{
	{0xfe,0xf0,BIT,0},
	{0xfe,0xf0,BIT,0},
	{0xfe,0xf0,BIT,0},
	{0xfc,0x06,BIT,0},
	{0xf6,0x00,BIT,0},
	{0xf7,0x1d,BIT,0},
	{0xf8,0x84,BIT,0},
	{0xfa,0x00,BIT,0},
	{0xf9,0xfe,BIT,0},
	{0xf2,0x00,BIT,0},
	/////////////////////////////////////////////////
	//////////////////ISP reg//////////////////////
	////////////////////////////////////////////////////
	{0xfe,0x00,BIT,0},
	{0x03,0x04,BIT,0},
	{0x04,0xe2,BIT,0},
	{0x09,0x00,BIT,0},
	{0x0a,0x00,BIT,0},
	{0x0b,0x00,BIT,0},
	{0x0c,0x00,BIT,0},
	{0x0d,0x04,BIT,0},
	{0x0e,0xc0,BIT,0},
	{0x0f,0x06,BIT,0},
	{0x10,0x50,BIT,0},
	{0x12,0x2e,BIT,0},
	{0x17,0x14,BIT,0}, // mirror
	{0x18,0x02,BIT,0},
	{0x19,0x0e,BIT,0},
	{0x1a,0x01,BIT,0},
	{0x1b,0x4b,BIT,0},
	{0x1c,0x07,BIT,0},
	{0x1d,0x10,BIT,0},
	{0x1e,0x98,BIT,0},
	{0x1f,0x78,BIT,0},
	{0x20,0x05,BIT,0},
	{0x21,0x40,BIT,0},
	{0x22,0xf0,BIT,0},
	{0x24,0x16,BIT,0},
	{0x25,0x01,BIT,0},
	{0x26,0x10,BIT,0},
	{0x2d,0x40,BIT,0},
	{0x30,0x01,BIT,0},
	{0x31,0x90,BIT,0},
	{0x33,0x04,BIT,0},
	{0x34,0x01,BIT,0},
	/////////////////////////////////////////////////
	//////////////////ISP reg////////////////////
	/////////////////////////////////////////////////
	{0xfe,0x00,BIT,0},
	{0x80,0xff,BIT,0},
	{0x81,0x2c,BIT,0},
	{0x82,0xfa,BIT,0},
	{0x83,0x00,BIT,0},
	{0x84,0x02,BIT,0}, //yuv 01
	{0x85,0x08,BIT,0}, // 08 20140722
	{0x86,0x02,BIT,0},
	{0x89,0x03,BIT,0},
	{0x8a,0x00,BIT,0},
	{0x8b,0x00,BIT,0},
	{0xb0,0x55,BIT,0},
	{0xc3,0x11,BIT,0}, //00
	{0xc4,0x20,BIT,0},
	{0xc5,0x30,BIT,0},
	{0xc6,0x38,BIT,0},
	{0xc7,0x40,BIT,0},
	{0xec,0x02,BIT,0},
	{0xed,0x04,BIT,0},
	{0xee,0x60,BIT,0},
	{0xef,0x90,BIT,0},
	{0xb6,0x01,BIT,0},
	{0x90,0x01,BIT,0},
	{0x91,0x00,BIT,0},
	{0x92,0x00,BIT,0},
	{0x93,0x00,BIT,0},
	{0x94,0x00,BIT,0},
	{0x95,0x04,BIT,0},
	{0x96,0xb0,BIT,0},
	{0x97,0x06,BIT,0},
	{0x98,0x40,BIT,0},
	/////////////////////////////////////////
	/////////// BLK ////////////////////////
	/////////////////////////////////////////
	{0xfe,0x00,BIT,0},
	{0x18,0x02,BIT,0},
	{0x40,0x42,BIT,0},
	{0x41,0x00,BIT,0},
	{0x43,0x5b,BIT,0},
	{0x5e,0x00,BIT,0},
	{0x5f,0x00,BIT,0},
	{0x60,0x00,BIT,0},
	{0x61,0x00,BIT,0},
	{0x62,0x00,BIT,0},
	{0x63,0x00,BIT,0},
	{0x64,0x00,BIT,0},
	{0x65,0x00,BIT,0},
	{0x66,0x20,BIT,0},
	{0x67,0x20,BIT,0},
	{0x68,0x20,BIT,0},
	{0x69,0x20,BIT,0},
	{0x6a,0x08,BIT,0},
	{0x6b,0x08,BIT,0},
	{0x6c,0x08,BIT,0},
	{0x6d,0x08,BIT,0},
	{0x6e,0x08,BIT,0},
	{0x6f,0x08,BIT,0},
	{0x70,0x08,BIT,0},
	{0x71,0x08,BIT,0},
	{0x72,0xf0,BIT,0},
	{0x7e,0x3c,BIT,0},
	{0x7f,0x00,BIT,0},
	{0xfe,0x00,BIT,0},
	////////////////////////////////////////
	/////////// AEC ////////////////////////
	////////////////////////////////////////
	{0xfe,0x01,BIT,0},
	{0x01,0x08,BIT,0},
	{0x02,0xc0,BIT,0},
	{0x03,0x04,BIT,0},
	{0x04,0x90,BIT,0},
	{0x05,0x30,BIT,0},
	{0x06,0x98,BIT,0},
	{0x07,0x28,BIT,0},
	{0x08,0x6c,BIT,0},
	{0x09,0x00,BIT,0},
	{0x0a,0xc2,BIT,0},
	{0x0b,0x11,BIT,0},
	{0x0c,0x10,BIT,0},
	{0x13,0x2d,BIT,0},
	{0x17,0x00,BIT,0},
	{0x1c,0x11,BIT,0},
	{0x1e,0x61,BIT,0},
	{0x1f,0x30,BIT,0},
	{0x20,0x40,BIT,0},
	{0x22,0x80,BIT,0},
	{0x23,0x20,BIT,0},

	{0x12,0x35,BIT,0},
	{0x15,0x50,BIT,0},
	{0x10,0x31,BIT,0},
	{0x3e,0x28,BIT,0},
	{0x3f,0xe0,BIT,0},
	{0x40,0xe0,BIT,0},
	{0x41,0x08,BIT,0},

	{0xfe,0x02,BIT,0},
	{0x0f,0x05,BIT,0},
	/////////////////////////////
	//////// INTPEE /////////////
	/////////////////////////////
	{0xfe,0x02,BIT,0},
	{0x90,0x6c,BIT,0},
	{0x91,0x03,BIT,0},
	{0x92,0xc4,BIT,0},
	{0x97,0x64,BIT,0},
	{0x98,0x88,BIT,0},
	{0x9d,0x08,BIT,0},
	{0xa2,0x11,BIT,0},
	{0xfe,0x00,BIT,0},
	/////////////////////////////
	//////// DNDD///////////////
	/////////////////////////////
	{0xfe,0x02,BIT,0},
	{0x80,0xc1,BIT,0},
	{0x81,0x08,BIT,0},
	{0x82,0x05,BIT,0},
	{0x83,0x04,BIT,0},
	{0x84,0x0a,BIT,0},
	{0x86,0x80,BIT,0},
	{0x87,0x30,BIT,0},
	{0x88,0x15,BIT,0},
	{0x89,0x80,BIT,0},
	{0x8a,0x60,BIT,0},
	{0x8b,0x30,BIT,0},
	/////////////////////////////////////////
	/////////// ASDE ////////////////////////
	/////////////////////////////////////////
	{0xfe,0x01,BIT,0},
	{0x21,0x14,BIT,0},
	{0xfe,0x02,BIT,0},
	{0x3c,0x06,BIT,0},
	{0x3d,0x40,BIT,0},
	{0x48,0x30,BIT,0},
	{0x49,0x06,BIT,0},
	{0x4b,0x08,BIT,0},
	{0x4c,0x20,BIT,0},
	{0xa3,0x50,BIT,0},
	{0xa4,0x30,BIT,0},
	{0xa5,0x40,BIT,0},
	{0xa6,0x80,BIT,0},
	{0xab,0x40,BIT,0},
	{0xae,0x0c,BIT,0},
	{0xb3,0x42,BIT,0},
	{0xb4,0x24,BIT,0},
	{0xb6,0x50,BIT,0},
	{0xb7,0x01,BIT,0},
	{0xb9,0x28,BIT,0},
	{0xfe,0x00,BIT,0},
	///////////////////gamma1////////////////////
	{0xfe,0x02,BIT,0},
	{0x10,0x0d,BIT,0},
	{0x11,0x12,BIT,0},
	{0x12,0x17,BIT,0},
	{0x13,0x1c,BIT,0},
	{0x14,0x27,BIT,0},
	{0x15,0x34,BIT,0},
	{0x16,0x44,BIT,0},
	{0x17,0x55,BIT,0},
	{0x18,0x6e,BIT,0},
	{0x19,0x81,BIT,0},
	{0x1a,0x91,BIT,0},
	{0x1b,0x9c,BIT,0},
	{0x1c,0xaa,BIT,0},
	{0x1d,0xbb,BIT,0},
	{0x1e,0xca,BIT,0},
	{0x1f,0xd5,BIT,0},
	{0x20,0xe0,BIT,0},
	{0x21,0xe7,BIT,0},
	{0x22,0xed,BIT,0},
	{0x23,0xf6,BIT,0},
	{0x24,0xfb,BIT,0},
	{0x25,0xff,BIT,0},
	///////////////////gamma2////////////////////
	{0xfe,0x02,BIT,0},
	{0x26,0x0d,BIT,0},
	{0x27,0x12,BIT,0},
	{0x28,0x17,BIT,0},
	{0x29,0x1c,BIT,0},
	{0x2a,0x27,BIT,0},
	{0x2b,0x34,BIT,0},
	{0x2c,0x44,BIT,0},
	{0x2d,0x55,BIT,0},
	{0x2e,0x6e,BIT,0},
	{0x2f,0x81,BIT,0},
	{0x30,0x91,BIT,0},
	{0x31,0x9c,BIT,0},
	{0x32,0xaa,BIT,0},
	{0x33,0xbb,BIT,0},
	{0x34,0xca,BIT,0},
	{0x35,0xd5,BIT,0},
	{0x36,0xe0,BIT,0},
	{0x37,0xe7,BIT,0},
	{0x38,0xed,BIT,0},
	{0x39,0xf6,BIT,0},
	{0x3a,0xfb,BIT,0},
	{0x3b,0xff,BIT,0},
	///////////////////////////////////////////////
	///////////YCP ///////////////////////
	///////////////////////////////////////////////
	{0xfe,0x02,BIT,0},
	{0xd1,0x28,BIT,0},
	{0xd2,0x28,BIT,0},
	{0xdd,0x14,BIT,0},
	{0xde,0x88,BIT,0},
	{0xed,0x80,BIT,0},
	////////////////////////////
	//////// LSC ///////////////
	////////////////////////////
	{0xfe,0x01,BIT,0},
	{0xc2,0x1f,BIT,0},
	{0xc3,0x13,BIT,0},
	{0xc4,0x0e,BIT,0},
	{0xc8,0x16,BIT,0},
	{0xc9,0x0f,BIT,0},
	{0xca,0x0c,BIT,0},
	{0xbc,0x52,BIT,0},
	{0xbd,0x2c,BIT,0},
	{0xbe,0x27,BIT,0},
	{0xb6,0x47,BIT,0},
	{0xb7,0x32,BIT,0},
	{0xb8,0x30,BIT,0},
	{0xc5,0x00,BIT,0},
	{0xc6,0x00,BIT,0},
	{0xc7,0x00,BIT,0},
	{0xcb,0x00,BIT,0},
	{0xcc,0x00,BIT,0},
	{0xcd,0x00,BIT,0},
	{0xbf,0x0e,BIT,0},
	{0xc0,0x00,BIT,0},
	{0xc1,0x00,BIT,0},
	{0xb9,0x08,BIT,0},
	{0xba,0x00,BIT,0},
	{0xbb,0x00,BIT,0},
	{0xaa,0x0a,BIT,0},
	{0xab,0x0c,BIT,0},
	{0xac,0x0d,BIT,0},
	{0xad,0x02,BIT,0},
	{0xae,0x06,BIT,0},
	{0xaf,0x05,BIT,0},
	{0xb0,0x00,BIT,0},
	{0xb1,0x05,BIT,0},
	{0xb2,0x02,BIT,0},
	{0xb3,0x04,BIT,0},
	{0xb4,0x04,BIT,0},
	{0xb5,0x05,BIT,0},
	{0xd0,0x00,BIT,0},
	{0xd1,0x00,BIT,0},
	{0xd2,0x00,BIT,0},
	{0xd6,0x02,BIT,0},
	{0xd7,0x00,BIT,0},
	{0xd8,0x00,BIT,0},
	{0xd9,0x00,BIT,0},
	{0xda,0x00,BIT,0},
	{0xdb,0x00,BIT,0},
	{0xd3,0x00,BIT,0},
	{0xd4,0x00,BIT,0},
	{0xd5,0x00,BIT,0},
	{0xa4,0x04,BIT,0},
	{0xa5,0x00,BIT,0},
	{0xa6,0x77,BIT,0},
	{0xa7,0x77,BIT,0},
	{0xa8,0x77,BIT,0},
	{0xa9,0x77,BIT,0},
	{0xa1,0x80,BIT,0},
	{0xa2,0x80,BIT,0},

	{0xfe,0x01,BIT,0},
	{0xdc,0x35,BIT,0},
	{0xdd,0x28,BIT,0},
	{0xdf,0x0d,BIT,0},
	{0xe0,0x70,BIT,0},
	{0xe1,0x78,BIT,0},
	{0xe2,0x70,BIT,0},
	{0xe3,0x78,BIT,0},
	{0xe6,0x90,BIT,0},
	{0xe7,0x70,BIT,0},
	{0xe8,0x90,BIT,0},
	{0xe9,0x70,BIT,0},
	{0xfe,0x00,BIT,0},
	///////////////////////////////////////////////
	/////////// AWB////////////////////////
	///////////////////////////////////////////////
	{0xfe,0x01,BIT,0},
	{0x4f,0x00,BIT,0},
	{0x4f,0x00,BIT,0},
	{0x4b,0x01,BIT,0},
	{0x4f,0x00,BIT,0},
	{0x4c,0x01,BIT,0},
	{0x4d,0x71,BIT,0},
	{0x4e,0x02,BIT,0},
	{0x4c,0x01,BIT,0},
	{0x4d,0x91,BIT,0},
	{0x4e,0x02,BIT,0},
	{0x4c,0x01,BIT,0},
	{0x4d,0x50,BIT,0},
	{0x4e,0x02,BIT,0},
	{0x4c,0x01,BIT,0},
	{0x4d,0x70,BIT,0},
	{0x4e,0x02,BIT,0},
	{0x4c,0x01,BIT,0},
	{0x4d,0x90,BIT,0},
	{0x4e,0x02,BIT,0},
	{0x4c,0x01,BIT,0},
	{0x4d,0xb0,BIT,0},
	{0x4e,0x02,BIT,0},
	{0x4c,0x01,BIT,0},
	{0x4d,0xd0,BIT,0},
	{0x4e,0x02,BIT,0},
	{0x4c,0x01,BIT,0},
	{0x4d,0x4f,BIT,0},
	{0x4e,0x02,BIT,0},
	{0x4c,0x01,BIT,0},
	{0x4d,0x6f,BIT,0},
	{0x4e,0x02,BIT,0},
	{0x4c,0x01,BIT,0},
	{0x4d,0x8f,BIT,0},
	{0x4e,0x02,BIT,0},
	{0x4c,0x01,BIT,0},
	{0x4d,0xaf,BIT,0},
	{0x4e,0x02,BIT,0},
	{0x4c,0x01,BIT,0},
	{0x4d,0xcf,BIT,0},
	{0x4e,0x02,BIT,0},
	{0x4c,0x01,BIT,0},
	{0x4d,0x6e,BIT,0},
	{0x4e,0x03,BIT,0},
	{0x4c,0x01,BIT,0},
	{0x4d,0x8e,BIT,0},
	{0x4e,0x03,BIT,0},
	{0x4c,0x01,BIT,0},
	{0x4d,0xae,BIT,0},
	{0x4e,0x03,BIT,0},
	{0x4c,0x01,BIT,0},
	{0x4d,0xce,BIT,0},
	{0x4e,0x03,BIT,0},
	{0x4c,0x01,BIT,0},
	{0x4d,0x4d,BIT,0},
	{0x4e,0x03,BIT,0},
	{0x4c,0x01,BIT,0},
	{0x4d,0x6d,BIT,0},
	{0x4e,0x03,BIT,0},
	{0x4c,0x01,BIT,0},
	{0x4d,0x8d,BIT,0},
	{0x4e,0x03,BIT,0},
	{0x4c,0x01,BIT,0},
	{0x4d,0xad,BIT,0},
	{0x4e,0x03,BIT,0},
	{0x4c,0x01,BIT,0},
	{0x4d,0xcd,BIT,0},
	{0x4e,0x03,BIT,0},
	{0x4c,0x01,BIT,0},
	{0x4d,0x4c,BIT,0},
	{0x4e,0x03,BIT,0},
	{0x4c,0x01,BIT,0},
	{0x4d,0x6c,BIT,0},
	{0x4e,0x03,BIT,0},
	{0x4c,0x01,BIT,0},
	{0x4d,0x8c,BIT,0},
	{0x4e,0x03,BIT,0},
	{0x4c,0x01,BIT,0},
	{0x4d,0xac,BIT,0},
	{0x4e,0x03,BIT,0},
	{0x4c,0x01,BIT,0},
	{0x4d,0xcc,BIT,0},
	{0x4e,0x03,BIT,0},
	{0x4c,0x01,BIT,0},
	{0x4d,0xec,BIT,0},
	{0x4e,0x03,BIT,0},
	{0x4c,0x01,BIT,0},
	{0x4d,0x4b,BIT,0},
	{0x4e,0x03,BIT,0},
	{0x4c,0x01,BIT,0},
	{0x4d,0x6b,BIT,0},
	{0x4e,0x03,BIT,0},
	{0x4c,0x01,BIT,0},
	{0x4d,0x8b,BIT,0},
	{0x4e,0x03,BIT,0},
	{0x4c,0x01,BIT,0},
	{0x4d,0xab,BIT,0},
	{0x4e,0x03,BIT,0},
	{0x4c,0x01,BIT,0},
	{0x4d,0x8a,BIT,0},
	{0x4e,0x04,BIT,0},
	{0x4c,0x01,BIT,0},
	{0x4d,0xaa,BIT,0},
	{0x4e,0x04,BIT,0},
	{0x4c,0x01,BIT,0},
	{0x4d,0xca,BIT,0},
	{0x4e,0x04,BIT,0},
	{0x4c,0x01,BIT,0},
	{0x4d,0xa9,BIT,0},
	{0x4e,0x04,BIT,0},
	{0x4c,0x01,BIT,0},
	{0x4d,0xc9,BIT,0},
	{0x4e,0x04,BIT,0},
	{0x4c,0x01,BIT,0},
	{0x4d,0xcb,BIT,0},
	{0x4e,0x05,BIT,0},
	{0x4c,0x01,BIT,0},
	{0x4d,0xeb,BIT,0},
	{0x4e,0x05,BIT,0},
	{0x4c,0x02,BIT,0},
	{0x4d,0x0b,BIT,0},
	{0x4e,0x05,BIT,0},
	{0x4c,0x02,BIT,0},
	{0x4d,0x2b,BIT,0},
	{0x4e,0x05,BIT,0},
	{0x4c,0x02,BIT,0},
	{0x4d,0x4b,BIT,0},
	{0x4e,0x05,BIT,0},
	{0x4c,0x01,BIT,0},
	{0x4d,0xea,BIT,0},
	{0x4e,0x05,BIT,0},
	{0x4c,0x02,BIT,0},
	{0x4d,0x0a,BIT,0},
	{0x4e,0x05,BIT,0},
	{0x4c,0x02,BIT,0},
	{0x4d,0x2a,BIT,0},
	{0x4e,0x05,BIT,0},
	{0x4c,0x02,BIT,0},
	{0x4d,0x6a,BIT,0},
	{0x4e,0x06,BIT,0},
	{0x4c,0x02,BIT,0},
	{0x4d,0x29,BIT,0},
	{0x4e,0x06,BIT,0},
	{0x4c,0x02,BIT,0},
	{0x4d,0x49,BIT,0},
	{0x4e,0x06,BIT,0},
	{0x4c,0x02,BIT,0},
	{0x4d,0x69,BIT,0},
	{0x4e,0x06,BIT,0},
	{0x4c,0x02,BIT,0},
	{0x4d,0x89,BIT,0},
	{0x4e,0x06,BIT,0},
	{0x4c,0x02,BIT,0},
	{0x4d,0xa9,BIT,0},
	{0x4e,0x06,BIT,0},
	{0x4c,0x02,BIT,0},
	{0x4d,0xc9,BIT,0},
	{0x4e,0x06,BIT,0},
	{0x4c,0x02,BIT,0},
	{0x4d,0x48,BIT,0},
	{0x4e,0x06,BIT,0},
	{0x4c,0x02,BIT,0},
	{0x4d,0x68,BIT,0},
	{0x4e,0x06,BIT,0},
	{0x4c,0x03,BIT,0},
	{0x4d,0x09,BIT,0},
	{0x4e,0x07,BIT,0},
	{0x4c,0x02,BIT,0},
	{0x4d,0xa8,BIT,0},
	{0x4e,0x07,BIT,0},
	{0x4c,0x02,BIT,0},
	{0x4d,0xc8,BIT,0},
	{0x4e,0x07,BIT,0},
	{0x4c,0x02,BIT,0},
	{0x4d,0xe8,BIT,0},
	{0x4e,0x07,BIT,0},
	{0x4c,0x03,BIT,0},
	{0x4d,0x08,BIT,0},
	{0x4e,0x07,BIT,0},
	{0x4c,0x03,BIT,0},
	{0x4d,0x28,BIT,0},
	{0x4e,0x07,BIT,0},
	{0x4c,0x02,BIT,0},
	{0x4d,0x87,BIT,0},
	{0x4e,0x07,BIT,0},
	{0x4c,0x02,BIT,0},
	{0x4d,0xa7,BIT,0},
	{0x4e,0x07,BIT,0},
	{0x4c,0x02,BIT,0},
	{0x4d,0xc7,BIT,0},
	{0x4e,0x07,BIT,0},
	{0x4c,0x02,BIT,0},
	{0x4d,0xe7,BIT,0},
	{0x4e,0x07,BIT,0},
	{0x4c,0x03,BIT,0},
	{0x4d,0x07,BIT,0},
	{0x4e,0x07,BIT,0},
	{0x4f,0x01,BIT,0},
	{0xfe,0x01,BIT,0},

	{0x50,0x80,BIT,0},
	{0x51,0xa8,BIT,0},
	{0x52,0x57,BIT,0},
	{0x53,0x38,BIT,0},
	{0x54,0xc7,BIT,0},
	{0x56,0x0e,BIT,0},
	{0x58,0x08,BIT,0},
	{0x5b,0x00,BIT,0},
	{0x5c,0x74,BIT,0},
	{0x5d,0x8b,BIT,0},
	{0x61,0xd3,BIT,0},
	{0x62,0x90,BIT,0},
	{0x63,0xaa,BIT,0},
	{0x65,0x04,BIT,0},
	{0x67,0xb2,BIT,0},
	{0x68,0xac,BIT,0},
	{0x69,0x00,BIT,0},
	{0x6a,0xb2,BIT,0},
	{0x6b,0xac,BIT,0},
	{0x6c,0xdc,BIT,0},
	{0x6d,0xb0,BIT,0},
	{0x6e,0x30,BIT,0},
	{0x6f,0x40,BIT,0},
	{0x70,0x05,BIT,0},
	{0x71,0x80,BIT,0},
	{0x72,0x80,BIT,0},
	{0x73,0x30,BIT,0},
	{0x74,0x01,BIT,0},
	{0x75,0x01,BIT,0},
	{0x7f,0x08,BIT,0},
	{0x76,0x70,BIT,0},
	{0x77,0x48,BIT,0},
	{0x78,0xa0,BIT,0},
	{0xfe,0x00,BIT,0},

	//////////////////////////////////////////
	///////////CC////////////////////////
	//////////////////////////////////////////
	{0xfe,0x02,BIT,0},
	{0xc0,0x01,BIT,0},
	{0xc1,0x4a,BIT,0},
	{0xc2,0xf3,BIT,0},
	{0xc3,0xfc,BIT,0},
	{0xc4,0xe4,BIT,0},
	{0xc5,0x48,BIT,0},
	{0xc6,0xec,BIT,0},
	{0xc7,0x45,BIT,0},
	{0xc8,0xf8,BIT,0},
	{0xc9,0x02,BIT,0},
	{0xca,0xfe,BIT,0},
	{0xcb,0x42,BIT,0},
	{0xcc,0x00,BIT,0},
	{0xcd,0x45,BIT,0},
	{0xce,0xf0,BIT,0},
	{0xcf,0x00,BIT,0},
	{0xe3,0xf0,BIT,0},
	{0xe4,0x45,BIT,0},
	{0xe5,0xe8,BIT,0},
	//////////////////////////////////////////
	///////////ABS ////////////////////
	//////////////////////////////////////////
	{0xfe,0x01,BIT,0},
	{0x9f,0x42,BIT,0},
	{0xfe,0x00,BIT,0},
	//////////////////////////////////////////
	///////////OUTPUT ////////////////////
	//////////////////////////////////////////
	{0xfe,0x00,BIT,0},
	{0xf2,0x0f,BIT,0},

	//////////////frame rate 50Hz/////////
	{0xfe,0x00,BIT,0},
	{0x05,0x01,BIT,0},
	{0x06,0x56,BIT,0},
	{0x07,0x00,BIT,0},
	{0x08,0x32,BIT,0},
	{0xfe,0x01,BIT,0},
	{0x25,0x00,BIT,0},
	{0x26,0xfa,BIT,0},
	{0x27,0x04,BIT,0},
	{0x28,0xe2,BIT,0}, //20fps
	{0x29,0x06,BIT,0},
	{0x2a,0xd6,BIT,0}, //16fps
	{0x2b,0x07,BIT,0},
	{0x2c,0xd0,BIT,0}, //12fps
	{0x2d,0x0b,BIT,0},
	{0x2e,0xb8,BIT,0}, //8fps
	{0xfe,0x00,BIT,0},
};

static struct sensor_reg_list gc2155_init = {
	.size = ARRAY_ROW(init_gc2155),
	.val = init_gc2155
};

static struct sensor_reg_list gc2155_uxga = {
	.size = ARRAY_ROW(uxga_gc2155),
	.val = uxga_gc2155
};
static struct sensor_reg_list gc2155_720p = {
	.size = ARRAY_ROW(r720p_gc2155),
	.val = r720p_gc2155
};
static struct sensor_reg_list gc2155_vga = {
	.size = ARRAY_ROW(vga_gc2155),
	.val = vga_gc2155
};
static struct sensor_win_size gc2155_win_size[] = {
	WIN_SIZE("UXGA", W_UXGA, H_UXGA, &gc2155_uxga),
	WIN_SIZE("720P", W_720P, H_720P, &gc2155_720p),
	WIN_SIZE("VGA", W_VGA, H_VGA, &gc2155_vga),
};

static struct sensor_win_cfg gc2155_win_cfg = {
	.num = ARRAY_ROW(gc2155_win_size),
	.win_size = gc2155_win_size
};

static struct sensor_csi_cfg gc2155_csi_cfg = {
	.csi_en = false,
	.d_term_en = 0,
	.c_term_en = 0,
	.dhs_settle = 0,
	.chs_settle = 0,
};

static struct sensor_info gc2155_info = {
	.name		= "gc2155",
	.chip_id	= 0x2155,
	.mclk		= 26,
	.i2c_addr	= 0x3C,
	.exp_def	= 0,
	.awb_def	= 1,
	.rst_act_h	= false,
	.pdn_act_h	= true,
	.init		= &gc2155_init,
	.win_cfg	= &gc2155_win_cfg,
	.csi_cfg	= &gc2155_csi_cfg
};

extern void sensor_power_down(bool high, bool acth, int id);
extern void sensor_reset(bool rst, bool acth);
extern void sensor_clock(bool out, int mclk);
extern void sensor_read(const u16 addr, u8 *data, u8 bits);
extern void sensor_write(const u16 addr, const u8 data, u8 bits);
extern void sensor_write_group(struct sensor_reg* reg, u32 size);

static u32 gc2155_power(int id, int mclk, bool rst_h, bool pdn_h)
{
	/* set state to power off */
	sensor_power_down(true, pdn_h, 0);
	mdelay(1);
	sensor_power_down(true, pdn_h, 1);
	mdelay(1);
	sensor_reset(true, rst_h);
	mdelay(1);

	/* power on sequence */
	sensor_clock(true, mclk);
	mdelay(1);
	sensor_power_down(false, pdn_h, id);
	mdelay(1);
	sensor_reset(false, rst_h);
	mdelay(10);

	return 0;
}

static u32 gc2155_get_chipid(void)
{
	u16 chip_id = 0;
	u8 tmp;

	sensor_read(0xf0, &tmp, BIT);
	chip_id = (tmp << 8) & 0xff00;
	sensor_read(0xf1, &tmp, BIT);
	chip_id |= (tmp & 0xff);

	return chip_id;
}

static u32 gc2155_get_lum(void)
{
	u8 val = 0;
	u32 ret = 0;

	sensor_write(0xfe, 0x00, BIT);
	sensor_read(0xd4, &val, BIT);

	if (val < 0x30)
		ret = 1;

	return ret;
}

#define GC2155_FLIP_BASE	0x14
#define GC2155_H_FLIP_BIT	0
#define GC2155_V_FLIP_BIT	1
static void gc2155_set_flip(int hv, int flip)
{
	u8 tmp = 0;

	sensor_read(GC2155_FLIP_BASE, &tmp, BIT);

	if (hv) {
		if (flip)
			tmp |= (0x1 << GC2155_V_FLIP_BIT);
		else
			tmp &= ~(0x1 << GC2155_V_FLIP_BIT);
	}
	else {
		if (flip)
			tmp |= (0x1 << GC2155_H_FLIP_BIT);
		else
			tmp &= ~(0x1 << GC2155_H_FLIP_BIT);
	}

	sensor_write(GC2155_FLIP_BASE, tmp, BIT);
}

#define GC2155_EXP_ROW		ARRAY_ROW(exp_gc2155)
#define GC2155_EXP_COL		ARRAY_COL(exp_gc2155)
static void gc2155_set_exp(int exp)
{
	int key = exp + (GC2155_EXP_ROW / 2);
	if ((key < 0) || (key > (GC2155_EXP_ROW - 1)))
		return;

	sensor_write_group(exp_gc2155[key], GC2155_EXP_COL);
}

#define GC2155_AWB_ROW		ARRAY_ROW(awb_gc2155)
#define GC2155_AWB_COL		ARRAY_COL(awb_gc2155)
static void gc2155_set_awb(int awb)
{
	if ((awb < 0) || (awb > (GC2155_AWB_ROW - 1)))
		return;

	sensor_write_group(awb_gc2155[awb], GC2155_AWB_COL);
}

static struct sensor_ops gc2155_ops = {
	.power		= gc2155_power,
	.get_chipid	= gc2155_get_chipid,
	.get_lum	= gc2155_get_lum,
	.set_flip	= gc2155_set_flip,
	.set_exp	= gc2155_set_exp,
	.set_awb	= gc2155_set_awb,
	.start		= NULL,
	.stop		= NULL
};

struct sensor_dev gc2155_dev = {
	.info	= &gc2155_info,
	.ops	= &gc2155_ops,
};

#undef BIT
#endif
