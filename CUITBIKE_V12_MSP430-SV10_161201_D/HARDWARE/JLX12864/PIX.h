/*
 * PIX.h
 *
 *  Created on: 2014-11-29
 *      Author: dell
 */

#ifndef __PIX_H
#define __PIX_H

//#define uchar unsigned char
//#define uint unsigned int
//#define ulong unsigned long
//
//
//const uchar  jiong1[]={//-- ����: �� --
////-- ����12; �������¶�Ӧ�ĵ���Ϊ����x ��=16x16 --
//0x00,0xFE,0x82,0x42,0xA2,0x9E,0x8A,0x82,0x86,0x8A,0xB2,0x62,0x02,0xFE,0x00,0x00,
//0x00,0x7F,0x40,0x40,0x7F,0x40,0x40,0x40,0x40,0x40,0x7F,0x40,0x40,0x7F,0x00,0x00};
//const uchar  lei1[]={//-- ����: �� --
////-- ����12; �������¶�Ӧ�ĵ���Ϊ����x ��=16x16 --
//0x80,0x80,0x80,0xBF,0xA5,0xA5,0xA5,0x3F,0xA5,0xA5,0xA5,0xBF,0x80,0x80,0x80,0x00,
//0x7F,0x24,0x24,0x3F,0x24,0x24,0x7F,0x00,0x7F,0x24,0x24,0x3F,0x24,0x24,0x7F,0x00};
////��ʱ

//const uchar  bmp1[]={
////-- ������һ��ͼ��D:\�ҵ��ĵ�\My Pictures\12864-555.bmp --
////-- ����x �߶�=128x64 --
//0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
//0x00,0x00,0x00,0x80,0x80,0xC0,0xC0,0xC0,0xC0,0xE0,0x60,0xE0,0xE0,0xE0,0xE0,0x60,
//0x60,0x60,0x60,0x60,0x60,0x60,0xE0,0xE0,0xE0,0xE0,0xC0,0xC0,0xC0,0xC0,0x80,0x80,
//0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
//0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
//0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
//0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
//0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
//0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0xC0,0xE0,0x70,0x38,0x18,0x1C,0x0C,
//0x0E,0x07,0x03,0x03,0x01,0x81,0xE0,0x78,0x1C,0x0E,0x07,0x03,0x01,0x00,0x00,0x00,
//0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x03,0x07,0x0E,0x1C,0x79,0xE1,0x83,
//0x03,0x07,0x0E,0x0C,0x1C,0x18,0x38,0x70,0xE0,0xC0,0x80,0x00,0x00,0x00,0x00,0x00,
//0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x80,0xC0,0xC0,0xC0,
//0xC0,0xE0,0xE0,0xE0,0xE0,0xE0,0xE0,0xE0,0xE0,0xE0,0xE0,0xE0,0xE0,0xE0,0xE0,0xE0,
//0xE0,0xE0,0xE0,0xE0,0xE0,0xE0,0xE0,0xE0,0xE0,0xE0,0xE0,0xE0,0xE0,0xE0,0xE0,0xE0,
//0xE0,0xE0,0xE0,0xC0,0xC0,0xC0,0xC0,0xC0,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
//0x00,0x00,0x00,0x80,0xF0,0x78,0x1E,0x07,0x03,0x81,0x80,0xC0,0xC0,0xC0,0xE0,0x60,
//0x60,0x60,0x70,0xF0,0xFE,0x3F,0x19,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,
//0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x38,0x31,0x3F,
//0xFE,0xF0,0x60,0x60,0xE0,0xC0,0xC0,0xC0,0x80,0x81,0x03,0x07,0x1E,0x78,0xF0,0x80,
//0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xC0,0xFC,0xFF,0x7F,0x07,0x0F,0x1F,0x3D,
//0x79,0x71,0xF0,0xE0,0xC0,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
//0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,
//0x80,0xC0,0xE0,0xF0,0x71,0x79,0x3D,0x1F,0x0F,0xFF,0xFE,0xFC,0x00,0x00,0x00,0x00,
//0x00,0x80,0xFE,0xFF,0xF9,0x1C,0x0E,0x07,0x03,0x03,0x01,0x01,0x00,0x00,0x00,0x00,
//0x00,0x00,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
//0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
//0x00,0xFF,0xFF,0x00,0x00,0x00,0x00,0x01,0x01,0x03,0x03,0x07,0x0E,0x1C,0xF9,0xFF,
//0xFE,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,
//0x00,0x00,0x00,0x01,0x03,0x07,0x0F,0x0E,0x9E,0xFC,0xF8,0xF0,0xE0,0xC0,0xC0,0x80,
//0x00,0x00,0x00,0x00,0x00,0x80,0xC0,0xC0,0xE0,0xF0,0xF8,0xF8,0xFC,0x9E,0x0F,0x07,
//0x03,0x03,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,
//0x00,0x00,0x3F,0xFF,0xDF,0x38,0x70,0xE0,0xC0,0xC0,0x80,0x80,0x00,0x00,0x00,0x00,
//0x00,0x00,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
//0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
//0x00,0xFF,0xFF,0x00,0x00,0x00,0x00,0x80,0x80,0xC0,0xC0,0xE0,0x70,0x38,0xDF,0xFF,
//0x3F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7F,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,
//0x80,0xC0,0xE0,0xF0,0x78,0x3C,0x1E,0x0F,0x07,0x03,0x01,0x00,0x01,0x01,0x03,0x07,
//0x0F,0x1E,0x1E,0x0E,0x0F,0x07,0x03,0x01,0x01,0x00,0x01,0x01,0x03,0x07,0x0F,0x1E,
//0x3C,0x78,0xF0,0xE0,0xC0,0x80,0x00,0x00,0x00,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,
//0x00,0x00,0x00,0x00,0x07,0x0F,0x3C,0x70,0xE0,0xC1,0x81,0x03,0x03,0x03,0x07,0x06,
//0x06,0x06,0x0E,0x0F,0x7F,0xFC,0x98,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,
//0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x0C,0x8C,0xFC,
//0x7F,0x0F,0x06,0x06,0x07,0x03,0x03,0x03,0x81,0xC1,0xE0,0x70,0x3C,0x0F,0x07,0x00,
//0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0x1F,0x3F,0x7C,0xFC,0xFE,0xEF,
//0xE7,0xE3,0xE1,0xE0,0xE0,0xE0,0xE0,0xE0,0xE0,0xE0,0xE0,0xE0,0xE0,0xE0,0xE0,0xE0,
//0xE0,0xE0,0xE0,0xE0,0xE0,0xE0,0xE0,0xE0,0xE0,0xE0,0xE0,0xE0,0xE0,0xE0,0xE0,0xE0,
//0xE0,0xE0,0xE0,0xE1,0xE3,0xE7,0xEF,0xFE,0x7C,0x3F,0x1F,0x0F,0x00,0x00,0x00,0x00,
//0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x03,0x07,0x0E,0x0C,0x1C,0x18,
//0x38,0x70,0x60,0xE0,0xC0,0xC1,0x87,0x9E,0xB8,0xF0,0xE0,0xC0,0x80,0x00,0x00,0x00,
//0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0xC0,0xE0,0xF0,0xB8,0xDE,0xC7,0xE1,
//0x60,0x70,0x38,0x18,0x1C,0x0C,0x0E,0x07,0x03,0x01,0x00,0x00,0x00,0x00,0x00,0x00,
//0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
//0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
//0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
//0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
//0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
//0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x01,0x01,0x03,0x03,0x03,0x03,0x03,0x07,0x07,
//0x07,0x07,0x07,0x07,0x07,0x07,0x07,0x03,0x03,0x03,0x01,0x01,0x01,0x01,0x00,0x00,
//0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
//0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
//0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
//0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
//0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
//};
#endif /* __PIX_H */