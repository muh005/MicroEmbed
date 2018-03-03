#ifndef __Initiation_H
#define __Initiation_H

#include "stm32f4xx.h"
#include "GPIO.h"
#include "stm32f4xx_gpio.h"
#include "stm32f4xx_rcc.h"


void initLED0(GPIO*);
void initButton0(GPIO*);
void SysTime_Init(void);
void doNothing(void);
#endif 

