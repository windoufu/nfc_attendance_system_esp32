/*
 * http_app_ota.h
 *
 *  Created on: 2018-04-06 15:12
 *      Author: Jack Chen <redchenjs@live.com>
 */

#ifndef INC_USER_HTTP_APP_OTA_H_
#define INC_USER_HTTP_APP_OTA_H_

#include "esp_http_client.h"

extern esp_err_t http_app_ota_event_handler(esp_http_client_event_t *evt);
extern void http_app_ota_prepare_data(char *buf, int len);

extern void http_app_check_for_updates(void);

#endif /* INC_USER_HTTP_APP_OTA_H_ */
