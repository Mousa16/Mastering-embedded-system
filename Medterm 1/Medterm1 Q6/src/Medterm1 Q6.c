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

void Find_Unique(char num[],int i);
int main(void) {
	int i,c,min,x;
	char num[100];
	printf("Enter a number : ");
	fflush(stdin);fflush(stdout);
	scanf("%s",num);
	i = strlen(num);
	for (c = 0 ; c < i ; c++)
	{
		for (x = c+1 ; x < i ; x++)
		{
			if (num[c] > num[x] )
			{
				min = num[x];
				num[x] = num[c];
				num[c] = min;
			}
		}
	}
	Find_Unique(num,i);

	return EXIT_SUCCESS;
}
void Find_Unique(char num[],int i)
{
	int c;
	if (num[0] != num[1])
		printf("%c ",num[0]);
	if (num[i-1] != num[i-2])
		printf("%c ",num[i-1]);
	for (c=1;c<i-1;c++)
	{
		if (num[c] != num[c-1] && num[c] != num[c+1])
			printf("%c ",num[c]);
	}
}
