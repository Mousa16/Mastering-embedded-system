/*
 * FIFO.c
 *
 *  Created on: ٢٥‏/٠٩‏/٢٠٢٣
 *      Author: محمود
 */

#include <FIFO.h>
FIFO_status FIFO_init    (FIFO_Buffer_t* fifo , element_type* buf , unsigned int length)
{
	if (fifo == NULL)
		return FIFO_null;
	fifo->base 	=  buf ;
	fifo->head 	=  buf ;
	fifo->tail 	=  buf ;
	fifo->length = length;
	fifo->count  = 0 ;
	return FIFO_no_error;
}
FIFO_status FIFO_enqueue (FIFO_Buffer_t* fifo , element_type item)
{
	if (!fifo->base || !fifo->head || !fifo->tail)
		return FIFO_null;
	// Check if fifo is full
	if (FIFO_is_full == FIFO_full)
		return FIFO_full;

	*(fifo->head) = item;
	fifo->count++ ;

	// circular fifo
	if (fifo->head == (fifo->base + fifo->length * sizeof(element_type)))
		fifo->head = fifo->base;
	else
		fifo->head++;
	return FIFO_no_error;
}
FIFO_status FIFO_dequeue (FIFO_Buffer_t* fifo , element_type* item)
{
	if (!fifo->base || !fifo->head || !fifo->tail)
		return FIFO_null;
	// check if fifo is empty
	if (fifo->count == 0)
		return FIFO_empty;

	*item = *(fifo->tail) ;
	fifo->count--;
	if (fifo->tail == (fifo->base + fifo->length * sizeof(element_type)))
		fifo->tail = fifo->base;
	else
		fifo->tail++;
	return FIFO_no_error;
}
FIFO_status FIFO_is_full (FIFO_Buffer_t* fifo)
{
	if (!fifo->base || !fifo->head || !fifo->tail)
		return FIFO_null;

	if (fifo->count == fifo->length)
		return FIFO_full;
	return FIFO_no_error;
}
void FIFO_print (FIFO_Buffer_t* fifo)
{
	element_type* temp;
	int i;
	if (fifo->count == 0)
		printf("FIFO is empty\n");
	else
	{
		temp = fifo->tail;
		printf("****** FIFO print *****\n");
		for (i = 0 ; i < fifo->count ; i++)
		{
			printf("\t %X \n",*temp);
			temp++;
		}
		printf("****** FIFO print done *****\n");
	}








}

