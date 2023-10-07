/*
 * CA.c
 *
 *  Created on: ٠٥‏/١٠‏/٢٠٢٣
 *      Author: محمود
 */

#include <CA.h>

unsigned int CA_distance = 0;
unsigned int CA_speed = 0;
unsigned int CA_threshold = 50;

void US_set_distance(int distance)
{
	CA_distance = distance;
	(CA_distance <= CA_threshold) ? (CA_state = STATE(CA_waiting)) : (CA_state = STATE(CA_driving));
	printf("US ->->-> CA \t");
}



STATE_define(CA_waiting)
{
	CA_state_id = CA_waiting;
	printf("Waiting state : distance = %u , speed = %u\n",CA_distance,CA_speed);
	CA_speed = 0;
	DC_get_speed(CA_distance);
}

STATE_define(CA_driving)
{
	CA_state_id = CA_driving;
	printf("driving state : distance = %u , speed = %u\n",CA_distance,CA_speed);
	CA_speed = 30;
	DC_get_speed(CA_distance);
}
