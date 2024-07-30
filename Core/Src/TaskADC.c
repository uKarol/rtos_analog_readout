/*
 * TaskADC.c
 *
 *  Created on: Jul 30, 2024
 *      Author: Karol
 */

#include "TaskADC.h"

 void StartTaskADC(void *argument)
 {
	  uint32_t tick;

	  tick = osKernelGetTickCount();        // retrieve the number of system ticks
	  while(1)
	  {
	    tick += TASK_ADC_PERIOD;                      // delay 1000 ticks periodically
	    osDelayUntil(tick);
	    // ...
	  }
 }
