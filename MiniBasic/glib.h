//	
//		glib.h
//
//		Graphic Lib
//      
//      Copyright 2010 joaquim <mail@joaquim.org>
//      
//      This program is free software; you can redistribute it and/or modify
//      it under the terms of the GNU General Public License as published by
//      the Free Software Foundation; either version 2 of the License, or
//      (at your option) any later version.
//      
//      This program is distributed in the hope that it will be useful,
//      but WITHOUT ANY WARRANTY; without even the implied warranty of
//      MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//      GNU General Public License for more details.
//      
//      You should have received a copy of the GNU General Public License
//      along with this program; if not, write to the Free Software
//      Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
//      MA 02110-1301, USA.

#ifndef __GLIB_H
#define __GLIB_H

#include "stm8s.h"

extern const u8 batt[];

//#define USEFONT5x5
#define USEFONT8x8

#define RGB(r,g,b)                     (((r&0xF8)<<8)|((g&0xFC)<<3)|((b&0xF8)>>3)) //5 red | 6 green | 5 blue
#define GET_RED(x)                     ((x>>8)&0xF8) //5 red
#define GET_GREEN(x)                   ((x>>3)&0xFC) //6 green
#define GET_BLUE(x)                    ((x<<3)&0xF8) //5 blue

#define BLACK RGB(0,0,0)
#define WHITE RGB(255,255,255)

void GLib_Init(void);

void Fill(u16 color);
void FillM(void);
void DrawLine(u8 x0, u8 y0, u8 x1, u8 y1, u16 color);
void FillRect(u8 x0, u8 y0, u8 x1, u8 y1, u16 color);
void DrawIcon(u8 x, u8 y, u8 icon[]);
void Cls(void);

u8 GetCharWidth(const char character);
unsigned int Puts(u8 x, u8 y, const char *s, u16 color, u16 bgcolor);

void u16tostr( u16 val,  char *strg, u8 nzero);

void GotoXY( u16 x, u16 y );
void PutText(char str[], u16 color, u16 bgcolor);
void DrawChar(char c, u16 color, u16 bgcolor);
void Write(const char *s, u16 color, u16 bgcolor);
void BackChar(const char c);

#endif /* __GLIB_H */