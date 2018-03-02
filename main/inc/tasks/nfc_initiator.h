/*
 * nfc_initiator.h
 *
 *  Created on: 2018-02-13 21:50
 *      Author: Jack Chen <redchenjs@live.com>
 */

#ifndef INC_TASKS_NFC_INITIATOR_H_
#define INC_TASKS_NFC_INITIATOR_H_

#include <stdint.h>

extern void nfc_initiator_set_mode(uint8_t mode);
extern void nfc_initiator_task(void *pvParameter);

#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

extern xTaskHandle nfc_initiator_task_handle;

#endif /* INC_TASKS_NFC_INITIATOR_H_ */