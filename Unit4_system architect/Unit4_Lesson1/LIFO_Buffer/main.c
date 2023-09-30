/*
 * main.c
 *
 *  Created on: ٢٥‏/٠٩‏/٢٠٢٣
 *      Author: محمود
 */

#include <LIFO.h>
#include <stdio.h>
#include <stdlib.h>

unsigned int buffer1 [5];

int main()
{
	unsigned int i , item = 0;
	LIFO_Buffer_t Uart_lifo;
	LIFO_init(&Uart_lifo, buffer1 , 5);
	for (i=0;i<5;i++)
	{
		if (LIFO_push_item(&Uart_lifo, i) == LIFO_no_error)
			printf("Uart_lifo push : %d \n",i);
	}
	for (i=0;i<5;i++)
	{
		if (LIFO_pop_item(&Uart_lifo, &item) == LIFO_no_error)
			printf("Uart_lifo pop : %d \n",item);
	}
return 0;
}

