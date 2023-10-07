/*
 * DC_motor.h
 *
 *  Created on: ٠٥‏/١٠‏/٢٠٢٣
 *      Author: محمود
 */

#ifndef DC_MOTOR_H_
#define DC_MOTOR_H_

#include <STATE.h>

void DC_init();

enum{
	DC_busy,
	DC_idle
} DC_state_id;

STATE_define(DC_busy);
STATE_define(DC_idle);

void (*DC_state)();


#endif /* DC_MOTOR_H_ */
