/*
 * US_sensor.c
 *
 *  Created on: ٠٥‏/١٠‏/٢٠٢٣
 *      Author: محمود
 */
#include <us_sensor.h>

unsigned int US_distance;

int generate_random(int min , int max , int count)
{
	int i ;
	for (i = 0 ; i < count ; i++)
	{
		int rand_num= (rand() % (max - min + 1)) + min;
		return rand_num;
	}
	return 0;
}

void US_init()
{
	printf("US init .\n");
}
STATE_define(US_busy)
{
	US_state_id = US_busy;
	US_distance = generate_random(45,55,1);
	printf("US_busy state : distance = %u .\n",US_distance);
	US_set_distance(US_distance);
	US_state = STATE(US_busy);
}
