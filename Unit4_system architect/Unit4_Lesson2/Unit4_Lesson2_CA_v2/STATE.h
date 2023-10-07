/*
 * STATE.h
 *
 *  Created on: ٠٥‏/١٠‏/٢٠٢٣
 *      Author: محمود
 */

#ifndef STATE_H_
#define STATE_H_

#include <stdio.h>
#include <stdlib.h>

#define STATE_define(_statefun_) void ST_##_statefun_()
#define STATE(_statefun_) ST_##_statefun_

// State connection
void US_set_distance(int distance);
void DC_get_speed(int speed);

#endif /* STATE_H_ */
