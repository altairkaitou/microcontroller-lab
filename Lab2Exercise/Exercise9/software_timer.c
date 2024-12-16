/*
 * software_timer.c
 *
 *  Created on: Sep 25, 2024
 *      Author: MinhBao
 */
#include "software_timer.h"
#include "main.h"
int timer1_counter=0;
int timer1_flag=0;
int timer2_counter=0;
int timer2_flag=0;
int timer3_counter=0;
int timer3_flag=0;
void setTimer1(int duration)
{
	timer1_counter = duration/10;
	timer1_flag=0;
}
void setTimer2(int duration)
{
	timer2_counter = duration/10;
	timer2_flag=0;
}
void setTimer3(int duration)
{
	timer3_counter = duration/10;
	timer3_flag=0;
}
void timerRun()
{
	if(timer1_counter>=0)
	{
		timer1_counter--;
		if(timer1_counter <= 0)
		{
			timer1_flag = 1;
		}
	}
	if(timer2_counter >= 0)
		{
			timer2_counter-- ;
			if(timer2_counter <= 0)
			{
				timer2_flag = 1;
			}
		}
	if(timer3_counter >= 0)
		{
			timer3_counter-- ;
			if(timer3_counter <= 0)
			{
				timer3_flag = 1;
			}
		}
}
void reset()
  {
	HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, 1);
	HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, 1);
	HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, 1);
	HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, 1);
	HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, 1);
	HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, 1);
	HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, 1);
  }
void display7SEG(int nums)
{
  reset();
  switch(nums)
  {
	  case 0:
	  {
			HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, 0);
			HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, 0);
			HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, 0);
			HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, 0);
			HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, 0);
			HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, 0);
			break;
	  }
	  case 1:
	  {
			HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, 0);
			HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, 0);
			break;
	  }
	  case 2:{
			HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, 0);
			HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, 0);
			HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, 0);
			HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, 0);
			HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, 0);
			break;
		  }
	  case 3:{
			HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, 0);
			HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, 0);
			HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, 0);
			HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, 0);
			HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, 0);
			break;
		  }
	  case 4:{
			HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, 0);
			HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, 0);
			HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, 0);
			HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, 0);
			break;
		  }
	  case 5:{
			HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, 0);
			HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, 0);
			HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, 0);
			HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, 0);
			HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, 0);
			break;
		  }
	  case 6:{
			HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, 0);
			HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, 0);
			HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, 0);
			HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, 0);
			HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, 0);
			HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, 0);
			break;
		  }
	  case 7:{
			HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, 0);
			HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, 0);
			HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, 0);
			break;
		  }
	  case 8:{
			HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, 0);
			HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, 0);
			HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, 0);
			HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, 0);
			HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, 0);
			HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, 0);
			HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, 0);
			break;
		  }
	  case 9:{
			HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, 0);
			HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, 0);
			HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, 0);
			HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, 0);
			HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, 0);
			HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, 0);
			break;
		  }
  }
}
