/*
 ============================================================================
 Name        : Assignment_C_Functions.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int Find_Prime(int x);			/* Function Prototype */
int Factorial(int x);			/* Function Prototype */
int Power(int x,int y);			/* Function Prototype */
void Reverse(char str[], int i);/* Function Prototype */
int main(void) {

	printf("*****************************************************\n");
	printf("Example 1\n");
	printf("******************************************************\n\n");

	int x,y,n;
	printf("Enter two numbers (intervals) : ");
	fflush(stdout);fflush(stdin);
	scanf("%d %d",&x,&y);
	printf("Prime numbers between %d and %d are :",x,y);
	if (x<y)
	{
		for (n = x+1;n < y ; n++)
			{
				if (Find_Prime(n)==0)
					printf(" %d ",n);
			}
	}
	if (x>y)
	{
		for (n = y+1;n < x ; n++)
			{
				if (Find_Prime(n)==0)
					printf(" %d ",n);
			}
	}
	printf("\n");

	printf("*****************************************************\n");
	printf("Example 2\n");
	printf("******************************************************\n\n");

	printf("Enter a positive integer : ");
	fflush(stdout);fflush(stdin);
	scanf("%d",&x);
	printf("Factorial of %d = %d\n\n",x,Factorial(x));

	printf("*******************************************************\n");
	printf("Example 3\n");
	printf("*******************************************************\n\n");

	printf("Enter A Sentence: ");
	fflush(stdin);fflush(stdout);
	char str[100];
	scanf("%[^\n]%*c", str);
	int i = strlen(str);
	Reverse(str, i);
	printf("\n");

	printf("*******************************************************\n");
	printf("Example 4\n");
	printf("*******************************************************\n\n");

	printf("Enter base number: ");
	fflush(stdout);fflush(stdin);
    scanf("%d",&x);
    printf("Enter power number (Positive integer): ");
    fflush(stdout);fflush(stdin);
    scanf("%d",&y);
    printf("%d ^ %d = %d\n",x,y,Power(x,y));

	return EXIT_SUCCESS;
}

/* Function definition for example 1 */


int Find_Prime (int x)
{
	int c;
	if (x < 2)
		return 1;
	for (c = 2;c < x; c++)
	{
		if (x % c == 0)
			return 1;
	}
	return 0;
}

/* Function definition for example 2 */

int Factorial(int x)
{

	if (x != 1)
		return x * Factorial(x-1);
}
/* Function of example 3 */
void Reverse(char str[], int i)
{
    if (i > 0)
    {
        i--;
        printf("%c", str[i]);
        Reverse(str, i);
    }
}

/* Function of example 4 */

int Power(int x,int y)
{

	if (y ==1)
		return x;
	else if (y == 0)
		return 1;
	else
	{
		return x * Power(x,y-1);
	}



}

