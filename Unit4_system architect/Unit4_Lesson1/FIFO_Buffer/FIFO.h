/*
 * FIFO.h
 *
 *  Created on: ٢٥‏/٠٩‏/٢٠٢٣
 *      Author: محمود
 */

#ifndef FIFO_H_
#define FIFO_H_

#include <stdio.h>
#include <stdint.h>

// Select element type (uint8_t , uint16_t , uint32_t , ....)
#define element_type uint8_t
// Create buffer
#define width 5
element_type buff [width];

// Fifo data types
typedef struct{
	unsigned int length;
	unsigned int count;
	element_type* base;
	element_type* head;
	element_type* tail;
}FIFO_Buffer_t;

typedef enum{
	FIFO_no_error,
	FIFO_full	,
	FIFO_empty	,
	FIFO_null
}FIFO_status;

// APIs
FIFO_status FIFO_init    (FIFO_Buffer_t* fifo , element_type* buf , unsigned int length);
FIFO_status FIFO_enqueue (FIFO_Buffer_t* fifo , element_type item) ;
FIFO_status FIFO_dequeue (FIFO_Buffer_t* fifo , element_type* item);
FIFO_status FIFO_is_full (FIFO_Buffer_t* fifo);
void FIFO_print          (FIFO_Buffer_t* fifo);



#endif /* FIFO_H_ */
