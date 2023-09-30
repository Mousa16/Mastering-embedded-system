/*
 * main.c
 *
 *  Created on: ٢٥‏/٠٩‏/٢٠٢٣
 *      Author: محمود
 */


#include <FIFO.h>
int main(){
	FIFO_Buffer_t FIFO_UART;
	element_type i,temp = 0;
	if (FIFO_init(&FIFO_UART, buff, 5) == FIFO_no_error)
		printf("FIFO init : done\n");

	for (i = 0 ; i < 5 ; i++)
	{
		printf("FIFO enqueue (%X) \n",i);
		if (FIFO_enqueue(&FIFO_UART, i) == FIFO_no_error)
			printf("\t FIFO enqueue : done \n");
		else
			printf("\t FIFO enqueue : Failed \n");
	}

	FIFO_print(&FIFO_UART);
	if (FIFO_dequeue(&FIFO_UART, &temp) == FIFO_no_error)
		printf("FIFO dequeue (%X) : done \n",temp);
	if (FIFO_dequeue(&FIFO_UART, &temp) == FIFO_no_error)
		printf("FIFO dequeue (%X) : done \n",temp);
	FIFO_print(&FIFO_UART);

	return 0;
}
