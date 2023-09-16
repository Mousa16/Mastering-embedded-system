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

int Sum(char str[],int i);

int main(void) {
	int i;
	printf("Enter a number : ");
	fflush(stdout);fflush(stdin);
	char str[100];
	gets(str);
	i = strlen(str);
	printf("The sum of the digits = %d",Sum(str,i));


	return EXIT_SUCCESS;
}
int Sum(char str[], int i)
{
	int c = 0,s = 0;
	for (c=0;c<i;c++)
	{
		s += ((int)str[c] - 48);
	}
	return s;
}
