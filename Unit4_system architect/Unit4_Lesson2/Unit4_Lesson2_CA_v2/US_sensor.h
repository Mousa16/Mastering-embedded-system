/*
 * US_sensor.h
 *
 *  Created on: ٠٥‏/١٠‏/٢٠٢٣
 *      Author: محمود
 */

#ifndef US_SENSOR_H_
#define US_SENSOR_H_

#include <STATE.h>

void US_init();

enum{
	US_busy
} US_state_id;

STATE_define(US_busy);

void (*US_state)();


#endif /* US_SENSOR_H_ */
