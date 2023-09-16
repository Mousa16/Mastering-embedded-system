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

void Reverse(char str[],int i);
int main(void) {
	printf("Enter a sentence : ");
	fflush(stdin);fflush(stdout);
	char str[100];
	gets(str);
	int i = strlen(str);
	Reverse(str,i);

	return EXIT_SUCCESS;
}
void Reverse(char str[], int i)
{
	int c;
	for (c = 0 ; c < i ; c++)
		if (str[c] == ' ')
			printf("%s ",&str[c+1]);
	for (c = 0 ; c < i ; c++)
		if (str[c] != ' ')
			printf("%c",str[c]);
		else
			break;
}









