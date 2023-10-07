/*
 * DC_motor.c
 *
 *  Created on: ٠٥‏/١٠‏/٢٠٢٣
 *      Author: محمود
 */

#include <DC_motor.h>

unsigned int DC_speed;

void DC_init()
{
	printf("DC init .\n");
}

void DC_get_speed(int speed)
{
	DC_speed = speed;
	DC_state = STATE(DC_busy);
	printf("CA -> -> -> DC DC_motor() \t");
}

STATE_define(DC_idle)
{
	DC_state_id = DC_idle;
	DC_state = STATE(DC_idle);
	printf("DC_busy state : speed = %u .\n",DC_speed);
}

STATE_define(DC_busy)
{
	DC_state_id = DC_busy;
	DC_state = STATE(DC_idle);
	printf("DC_busy state : speed = %u .\n",DC_speed);
}
