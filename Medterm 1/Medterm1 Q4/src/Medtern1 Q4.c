/*
 ============================================================================
 Name        : Medtern1.c
 Author      : Mahmoud Mousa
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Reverse(char num[],int i);
int main(void) {

	printf("Enter a number : ");
	fflush(stdout);fflush(stdin);
	char num[100];
	gets(num);
	int i = strlen(num);
	Reverse(num,i);

	return EXIT_SUCCESS;
}
void Reverse(char num[], int i)
{
	if (i > 0)
	{
		i--;
		printf("%c", num[i]);
		Reverse(num,i);
	}
}
