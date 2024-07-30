/*
 * TaskCOM.c
 *
 *  Created on: Jul 30, 2024
 *      Author: Karol
 */
#include "TaskCOM.h"

 void StartTaskCom(void *argument)
 {
	  uint32_t tick;

	  tick = osKernelGetTickCount();        // retrieve the number of system ticks
	  while(1)
	  {
	    tick += TASK_COM_PERIOD;                      // delay 1000 ticks periodically
	    osDelayUntil(tick);
	    // ...
	  }
 }
