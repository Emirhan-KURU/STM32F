/*
 * Face.c
 *
 *  Created on: Jul 27, 2023
 *      Author: USER
 */
#include <ST7735.h>
#include "stdint.h"
#include "stdlib.h"
#include "GFX_FUNCTIONS.h"
#include "Robot.h"

void Happy_1()
{
	  Half_Circle(60,80,25,ST7735_WHITE,1);
	  Robot_eyes1(75,30,18,ST7735_WHITE,ST7735_BLACK);
}

void Cute_1()
{
	Half_Circle(60,80,25,ST7735_WHITE,1);
	DrawHeart(90,30,12,ST7735_WHITE,2);
	DrawHeart(90,80+30,12,ST7735_WHITE,2);
}

void Happy_2()
{
	Arrow_eyes(80,40,20,2, ST7735_WHITE);
	Arrow_eyes(80,160-40,20,2, ST7735_WHITE);
	Arrow_lip(50,80,20,1, ST7735_WHITE);
}
void NotBad()
{
	  for(int i= 65;i<95;i++)
		  drawCircle(50, i, 2, ST7735_WHITE);
	  Robot_eyes1(75,30,18,ST7735_WHITE,ST7735_BLACK);
}
void Happy_3()
{
	Robot_eyes1(75,30,18,ST7735_WHITE,ST7735_BLACK);
	Arrow_lip(50,80,20,1, ST7735_WHITE);

}

void Shocked()
{
	Shocked_lip(40, 80, 10, ST7735_WHITE);
	Robot_eyes1(75,30,18,ST7735_WHITE,ST7735_BLACK);
	}
void Angry_1()
{
	  Angry_eyes(90, 40, 20, ST7735_WHITE, 1);
	  Angry_eyes(90, 120, 20, ST7735_WHITE, 2);
	  Arrow_eyes(30,80, 20,1, ST7735_WHITE);
	}
void UnHappy_1()
{
	  Arrow_eyes(40,80, 20,2, ST7735_WHITE);
	  Robot_eyes1(80,40,15,ST7735_WHITE,ST7735_BLACK);
	}
void Sleepy()
{
	  Arrow_lip(90, 30, 20,2, ST7735_WHITE);
	  Arrow_lip(90, 130, 20,2, ST7735_WHITE);
	  for(int i= 75;i<85;i++)
		  drawCircle(50, i, 2, ST7735_WHITE);
	}
void Happy_4()
{
	writeLineBold(100, 20,90, 50,2, ST7735_WHITE);
	writeLineBold(90, 50, 80, 20,2, ST7735_WHITE);
	writeLineBold(100, 140,90, 110,2, ST7735_WHITE);
	writeLineBold(90, 110, 80, 140,2, ST7735_WHITE);
	Half_Circle(50, 80, 20,ST7735_WHITE,1);
	}

void UnHappy_2()
{   // Gözler
	writeLineBold(100, 20,90, 50,2, ST7735_WHITE);
	writeLineBold(90, 50, 80, 20,2, ST7735_WHITE);
	writeLineBold(100, 140,90, 110,2, ST7735_WHITE);
	writeLineBold(90, 110, 80, 140,2, ST7735_WHITE);
	// ağız
	writeLineBold(40, 50,50,60,2, ST7735_WHITE);
	writeLineBold(50, 60, 40, 65,2, ST7735_WHITE);
	writeLineBold(40, 65,50, 75,2, ST7735_WHITE);
	writeLineBold(50, 75, 40, 80,2, ST7735_WHITE);
	writeLineBold(40, 80,50, 85,2, ST7735_WHITE);
	writeLineBold(50, 85, 40, 95,2, ST7735_WHITE);
	writeLineBold(40, 95,50, 100,2, ST7735_WHITE);
	writeLineBold(50, 100, 40, 110,2, ST7735_WHITE);
	}

void Dead()
{
	writeLineBold(100, 20,70, 50,2, ST7735_WHITE);
	writeLineBold(70, 20,100, 50,2, ST7735_WHITE);
	writeLineBold(100, 110,70, 140,2, ST7735_WHITE);
	writeLineBold(70, 110,100, 140,2, ST7735_WHITE);
	  for(int i= 60;i<100;i++)
		  drawCircle(40, i, 2, ST7735_WHITE);
}

void Happy_5()
{
	for(int i =15;i>0;i--)
	drawCircle(90, 40, i, ST7735_WHITE);
	writeLineBold(100, 140,90, 110,2, ST7735_WHITE);
	writeLineBold(90, 110, 80, 140,2, ST7735_WHITE);

	Arrow_lip(50, 80, 15,2,ST7735_WHITE);

	}

void Face_14()
{
	  Robot_eyes1(80,40,15,ST7735_WHITE,ST7735_BLACK);

}
