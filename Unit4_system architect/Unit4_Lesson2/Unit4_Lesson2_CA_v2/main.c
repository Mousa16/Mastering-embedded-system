/*
 * main.c
 *
 *  Created on: ٠٥‏/١٠‏/٢٠٢٣
 *      Author: محمود
 */

#include <US_sensor.h>
#include <DC_motor.h>
#include <CA.h>


void setup()
{
	US_init();
	DC_init();
	US_state = STATE(US_busy);
	CA_state = STATE(CA_waiting);
	DC_state = STATE(DC_idle);
}
int main()
{
	volatile unsigned int i;
	setup();
	while (1)
	{
		US_state();
		CA_state();
		DC_state();
		for (i = 0 ; i < 1000000 ; i++);
	}
	return 0;
}
