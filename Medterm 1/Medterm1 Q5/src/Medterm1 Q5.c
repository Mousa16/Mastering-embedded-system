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

void Bin(int n);
int main(void) {

	int n;
	printf("Enter an integer : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&n);
	Bin(n);

	return EXIT_SUCCESS;
}
void Bin(int n)
{
	int c,s=0;
	for (c=0;c<32;c++)
	{
		if ((n>>c) % 2 != 0)
			s += 1;
	}
	printf("%d",s);
}







