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

int Find_Prime (int x);
int main(void) {
	int x,y,n;
	printf("Enter two numbers : ");
	fflush(stdin);fflush(stdout);
	scanf("%d %d",&x,&y);
	printf("Prime numbers between %d and %d are :",x,y);
	if (x<y)
	{
		for (n = x +1; n < y ;n++)
		{
			if (Find_Prime(n)==0)
				printf(" %d ",n);
		}
	}
	if (x>y)
	{
		for (n = y+1 ; n < x ; n++)
		{
			if (Find_Prime(n)==0)
				printf(" %d ",n);
		}
	}
	return EXIT_SUCCESS;
}
int Find_Prime (int x)
{
	int c;
	for (c=2 ; c<x ; c++)
	{
		if (x % c == 0)
			return 1;
	}
	return 0;
}







