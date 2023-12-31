/*
 * light_control.h
 *
 *  Created on: Dec 6, 2023
 *      Author: ADMIN
 */

#ifndef INC_LIGHT_CONTROL_H_
#define INC_LIGHT_CONTROL_H_

#include "gpio.h"
#include "uart.h"
#include "button.h"
#include "lcd.h"

extern uint8_t light_status;

void lightProcess();

void test_Esp();

#endif /* INC_LIGHT_CONTROL_H_ */
