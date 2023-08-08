/*
 * Robot.c
 *
 *  Created on: Jul 26, 2023
 *      Author: USER
 */
#include <ST7735.h>
#include "stdint.h"
#include "stdlib.h"
#include "GFX_FUNCTIONS.h"

#define _swap_int16_t(a, b)                                                    \
  {                                                                            \
    int16_t t = a;                                                             \
    a = b;                                                                     \
    b = t;                                                                     \
  }

void DrawHeart(uint16_t x,uint16_t y,uint16_t r,uint16_t color,uint16_t R)
{
	if(1==R)
	{
	  for(int i= 1;i<=r;i++ )
	  {
		  drawCircle(x, y, i, color);
		  drawCircle(x+2*r, y, i,color);
	  }
	  for(int i =x-r;i<=x+3*r;i+=2)
	  {
		  drawLine(i, y+r/4,x+r, y+2.5*r, color);
	  }}
	if(2==R)
	{
		for(int i= 1;i<=r;i++ )
		{
			drawCircle(x, y, i, color);
			drawCircle(x, y+2*r, i,color);
		}
		for(int i =y-r;i<=y+3*r;i+=2)
		drawLine(x-(r/4), i,x-2.5*r, y+r, color);
	}
}

void Mini_eyes(uint16_t x,uint16_t y)
{
	for(int z=88 ;z<=100;z++)
	{
	ST7735_FillScreen(ST7735_BLACK);
	Robot_eyes(x,y);
	/*for(int i = 4; i>0 ;i--)
		{
			drawCircle(x+8, y-8, i,ST7735_WHITE);
			drawCircle(x+8, y+72, i,ST7735_WHITE);
		}*/
	for(int i = 4; i>0 ;i--)
			{
				drawCircle(z, z-60, i,ST7735_WHITE);
				drawCircle(z, z+20, i,ST7735_WHITE);
			}
	}
}

void Robot_eyes(uint16_t x,uint16_t y)
{
	for(int i = 20; i>12 ;i--)
	{
		drawCircle(x, y, i,ST7735_WHITE);
		drawCircle(x, y+80, i,ST7735_WHITE);
	}
	for(int i = 12; i>0 ;i--)
		{
			drawCircle(x, y, i,ST7735_BLACK);
			drawCircle(x, y+80, i,ST7735_BLACK);
		}
	/*for(int i= x;i<x+12;i++ )
		Mini_eyes(i,i-60);*/
	//Mini_eyes(x,y);

}


void Half_Circle(int16_t x0, int16_t y0, int16_t r, uint16_t color,uint16_t R)
{
	while(r>0)
	    {
    int16_t f = 1 - r;
    int16_t ddF_x = 1;
    int16_t ddF_y = -2 * r;
    int16_t x = 0;
    int16_t y = r;

    if(1==R)
    {
    	writePixel(x0  , y0+r,color);
    	writePixel(x0  , y0-r, color);
    	writePixel(x0-r, y0  ,color);

    	while (x<y) {
    	if (f >= 0) {
    	y--;
    	ddF_y += 2;
    	f += ddF_y;
    	}
    	x++;
    	ddF_x += 2;
    	f += ddF_x;

    	writePixel(x0 - x, y0 + y,color);
    	writePixel(x0 - x, y0 - y, color);
    	writePixel(x0 - y, y0 + x,color);
    	writePixel(x0 - y, y0 - x, color);
    }
    }
    if(2==R)
    {
    	 writePixel(x0  , y0+r,color);
    	 writePixel(x0+r, y0  ,color);
    	 writePixel(x0-r, y0  ,color);

    	while (x<y) {
    		if (f >= 0) {
    		y--;
    		ddF_y += 2;
    		f += ddF_y;
    	}
    	x++;
    	ddF_x += 2;
    	f += ddF_x;

    	writePixel(x0 + x, y0 + y,color);
    	writePixel(x0 - x, y0 + y,color);
    	writePixel(x0 + y, y0 + x,color);
    	writePixel(x0 - y, y0 + x,color);
    }
    }
    if(3==R)
    {
    	writePixel(x0  , y0+r,color);
    	writePixel(x0  , y0-r, color);
    	writePixel(x0+r, y0  ,color);

    	while (x<y) {
    		if (f >= 0) {
    		y--;
    		ddF_y += 2;
    		f += ddF_y;
    		}
    		x++;
    		ddF_x += 2;
    		f += ddF_x;

    	writePixel(x0 + x, y0 + y,color);
    	writePixel(x0 + x, y0 - y, color);
    	writePixel(x0 + y, y0 + x,color);
    	writePixel(x0 + y, y0 - x, color);
    			      }}
    if(4==R)
    {
    	writePixel(x0  , y0-r, color);
    	writePixel(x0+r, y0  ,color);
    	writePixel(x0-r, y0  ,color);

    	while (x<y) {
    		if (f >= 0) {
    		y--;
    		ddF_y += 2;
    		f += ddF_y;
    		}
    		x++;
    		ddF_x += 2;
    		f += ddF_x;

    		writePixel(x0 + x, y0 - y, color);
    		writePixel(x0 - x, y0 - y, color);
    		writePixel(x0 + y, y0 - x, color);
    		writePixel(x0 - y, y0 - x, color);
    }}
    r--;
}
}
void Robot_eyes1(int16_t x,int16_t y, int16_t r, int16_t color, int16_t color2)
{
	for(int i= 1;i<=r;i++ )
	{
	drawCircle(x,y,i,color);
	drawCircle(x,160-y,i,color);
	}
	int x1 = (r/2-r/10);
	for(int i= 1;i<=r/3;i++ )
		drawCircle(x+x1,y-x1,i,color2);
	for(int i= 1;i<=r/5;i++ )
		drawCircle(x-x1,y+x1,i,color2);
	for(int i= 1;i<=r/3;i++ )
		drawCircle(x+x1,160-(y+x1),i,color2);
	for(int i= 1;i<=r/5;i++ )
		drawCircle(x-x1,160-(y-x1),i,color2);

}

void Arrow_eyes(int16_t x0, int16_t y0, int16_t r,int16_t r2, uint16_t color)
{
		int16_t f = 1 - r;
	    int16_t ddF_x = 1;
	    int16_t ddF_y = -2 * r;
	    int16_t x = 0;
	    int16_t y = r;

	    writePixel(x0  , y0+r, color);
	    writePixel(x0  , y0-r, color);
	    writePixel(x0+r, y0  , color);


	    while (x<y) {
	        if (f >= 0) {
	            y--;
	            ddF_y += 2;
	            f += ddF_y;
	        }
	        x++;
	        ddF_x += 2;
	        f += ddF_x;

	        drawCircle(x0 + x, y0 + y,r2,color);
	        drawCircle(x0 + x, y0 - y,r2,color);
	        drawCircle(x0 + y, y0 + x,r2+1,color);
	        drawCircle(x0 + y, y0 - x,r2+1,color);
	    }}
void Arrow_lip(int16_t x0, int16_t y0, int16_t r,int16_t r2, uint16_t color)
{
	int16_t f = 1 - r;
		    int16_t ddF_x = 1;
		    int16_t ddF_y = -2 * r;
		    int16_t x = 0;
		    int16_t y = r;

		    writePixel(x0  , y0+r, color);
		    writePixel(x0  , y0-r, color);
		    writePixel(x0-r, y0  , color);


		    while (x<y) {
		        if (f >= 0) {
		            y--;
		            ddF_y += 2;
		            f += ddF_y;
		        }
		        x++;
		        ddF_x += 2;
		        f += ddF_x;

		        drawCircle(x0 - x, y0 + y,r2,color);
		        drawCircle(x0 - x, y0 - y,r2,color);
		        drawCircle(x0 - y, y0 + x,r2+1,color);
		        drawCircle(x0 - y, y0 - x,r2+1,color);
		    }}

void Shocked_lip(int16_t x0, int16_t y0, int16_t r, uint16_t color)
{
	for(int i = r;i>0;i--)
	{
	drawCircle(x0,y0,i-1,color);
	drawCircle(x0-4,y0,i-2,color);
	drawCircle(x0+4,y0,i-2,color);
	drawCircle(x0-8,y0,i-4,color);
	drawCircle(x0+8,y0,i-4,color);
	drawCircle(x0-10,y0,i-5,color);
	drawCircle(x0+10,y0,i-5,color);
	}
}

void Angry_eyes(int16_t x0, int16_t y0, int16_t r, uint16_t color, uint16_t R)
{
	while(r>0)
	{
	int16_t f = 1 - r;
	int16_t ddF_x = 1;
	int16_t ddF_y = -2 * r;
	int16_t x = 0;
	int16_t y = r;
	if(1==R)
	{
	    writePixel(x0  , y0-r, color);
	    writePixel(x0-r, y0  , color);
	    while (x<y) {
	        if (f >= 0) {
	            y--;
	            ddF_y += 2;
	            f += ddF_y;
	        }
	        x++;
	        ddF_x += 2;
	        f += ddF_x;
	     writePixel(x0 + x, y0 - y, color);
	     writePixel(x0 - x, y0 - y, color);
	     writePixel(x0 - y, y0 + x, color);
	     writePixel(x0 - y, y0 - x, color);
	}}
	if(2==R)
		{
	    writePixel(x0  , y0+r, color);
	    writePixel(x0-r, y0  , color);
	    while (x<y) {
	           if (f >= 0) {
	               y--;
	               ddF_y += 2;
	               f += ddF_y;
	           }
	           x++;
	           ddF_x += 2;
	           f += ddF_x;

	           writePixel(x0 + x, y0 + y, color);
	           writePixel(x0 - x, y0 + y, color);
	           writePixel(x0 - y, y0 + x, color);
	           writePixel(x0 - y, y0 - x, color);
	       }
}
	r--;
	}}

void writeLineBold(int16_t x0, int16_t y0, int16_t x1, int16_t y1,int16_t r, uint16_t color)
{
    int16_t steep = abs(y1 - y0) > abs(x1 - x0);
    if (steep) {
        _swap_int16_t(x0, y0);
        _swap_int16_t(x1, y1);
    }

    if (x0 > x1) {
        _swap_int16_t(x0, x1);
        _swap_int16_t(y0, y1);
    }

    int16_t dx, dy;
    dx = x1 - x0;
    dy = abs(y1 - y0);

    int16_t err = dx / 2;
    int16_t ystep;

    if (y0 < y1) {
        ystep = 1;
    } else {
        ystep = -1;
    }

    for (; x0<=x1; x0++) {
        if (steep) {
            drawCircle(y0, x0,r, color);
        } else {
            drawCircle(x0, y0, r,color);
        }
        err -= dy;
        if (err < 0) {
            y0 += ystep;
            err += dx;
        }
    }
}
