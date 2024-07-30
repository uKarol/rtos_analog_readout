/*
 * TaskADC.h
 *
 *  Created on: Jul 30, 2024
 *      Author: Karol
 */

#ifndef INC_TASKADC_H_
#define INC_TASKADC_H_

#include "cmsis_os2.h"

#define TASK_ADC_PERIOD 100

void StartTaskADC(void *argument);

#endif /* INC_TASKADC_H_ */
