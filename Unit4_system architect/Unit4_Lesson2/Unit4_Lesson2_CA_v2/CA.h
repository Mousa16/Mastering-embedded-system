/*
 * collision_avoidance.h
 *
 *  Created on: ٠٥‏/١٠‏/٢٠٢٣
 *      Author: محمود
 */

#ifndef CA_H_
#define CA_H_

#include <STATE.h>

enum{
	CA_waiting,
	CA_driving
} CA_state_id;

STATE_define(CA_waiting);
STATE_define(CA_driving);

// state connections
void CA_set_speed(int speed);
void CA_get_distance(int distance);
// global pointer to function
void (*CA_state)();

#endif /* CA_H_ */
