/*
 * Robot.h
 *
 *  Created on: Jul 26, 2023
 *      Author: USER
 */

#ifndef INC_ROBOT_H_
#define INC_ROBOT_H_

void DrawHeart(uint16_t x,uint16_t y,uint16_t r,uint16_t color,uint16_t R);
void Robot_eyes(uint16_t x,uint16_t y);
void Mini_eyes(uint16_t x,uint16_t y);
void Half_Circle(int16_t x0, int16_t y0, int16_t r, uint16_t color,uint16_t R);
void Robot_eyes1(int16_t x,int16_t y, int16_t r, int16_t color, int16_t color2);
void Arrow_eyes(int16_t x0, int16_t y0, int16_t r,int16_t r2, uint16_t color);
void Arrow_lip(int16_t x0, int16_t y0, int16_t r,int16_t r2, uint16_t color);
void Shocked_lip(int16_t x0, int16_t y0, int16_t r, uint16_t color);
void Angry_eyes(int16_t x0, int16_t y0, int16_t r, uint16_t color, uint16_t R);
void writeLineBold(int16_t x0, int16_t y0, int16_t x1, int16_t y1,int16_t r, uint16_t color);
#endif /* INC_ROBOT_H_ */
