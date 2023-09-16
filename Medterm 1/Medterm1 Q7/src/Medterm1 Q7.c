/*
 ============================================================================
 Name        : Medterm1.c
 Author      : Mahmoud Mousa
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int Sum(int ,int);
int main(void) {
	int s = 0, c = 1;
	printf("%d",Sum(s,c));

	return EXIT_SUCCESS;
}
int Sum(int s ,int c)
{
	if (c != 101)
	{
		s = s + c;
		c++;
		return(Sum(s,c));
	}
}
