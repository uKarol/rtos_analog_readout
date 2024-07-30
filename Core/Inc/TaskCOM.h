/*
 * TaskCOM.h
 *
 *  Created on: Jul 30, 2024
 *      Author: Karol
 */

#ifndef INC_TASKCOM_H_
#define INC_TASKCOM_H_

#include "cmsis_os2.h"

#define TASK_COM_PERIOD 100

void StartTaskCom(void *argument);

#endif /* INC_TASKCOM_H_ */
