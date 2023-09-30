/*
 * LIFO.h
 *
 *  Created on: ٢٥‏/٠٩‏/٢٠٢٣
 *      Author: محمود
 */

#ifndef LIFO_H_
#define LIFO_H_

//Type definitions
typedef struct{
	unsigned int length	;
	unsigned int count	;
	unsigned int* base	;
	unsigned int* head	;
}LIFO_Buffer_t;

//LIFO Status
typedef enum{
	LIFO_no_error,
	LIFO_full	,
	LIFO_empty	,
	LIFO_NULL
}LIFO_status;

// APIs
LIFO_status LIFO_push_item (LIFO_Buffer_t* lifo_buf , unsigned int item);
LIFO_status LIFO_pop_item (LIFO_Buffer_t* lifo_buf , unsigned int* item);
LIFO_status LIFO_init (LIFO_Buffer_t* lifo_buf , unsigned int* buf , unsigned int length);


#endif /* LIFO_H_ */
