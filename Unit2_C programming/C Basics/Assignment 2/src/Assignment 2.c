/*
 ============================================================================
 Name        : Assignment.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	/* Example 1 */
	int x;
	printf("Enter the integer you want to check.\n");
	fflush(stdin);fflush(stdout);
	scanf("%d",&x);
	switch(x%2)
	{
	case 0:
		printf("%d is even.\n",x);
		break;
	case 1:
		printf("%d is odd.\n",x);
		break;
	}

	/* Example 2 */
	char c;
	printf("Enter a character: ");
	fflush(stdin);fflush(stdout);
	scanf("%c",&c);
	switch(c){
	case 'i':
	case 'e':
	case 'o':
	case 'u':
	case 'a':
	{
		printf("vowel\n");
		break;
	}
	default:{
		printf("consonant\n");
		break;
	}
	}

	/* Example 3 */
	float n1,n2,n3;
	printf("Enter three numbers.\n");
	fflush(stdin);fflush(stdout);
	scanf("%f%f%f",&n1,&n2,&n3);
	switch(n1>n2 && n1>n3)
	{
	case 1:
		printf("%f is the largest number.\n",n1);
		break;
	case 0:
	{
		switch (n2>n3)
		{
		case 1:
			printf("%f is the largest number.\n",n2);
			break;
		case 0:
			printf("%f is the largest number.\n",n3);
			break;
		}
	}
	break;
	}

	/* Example 4 */
	float n;
	printf("Enter a number.\n");
	fflush(stdin);fflush(stdout);
	scanf("%f",&n);
	if (n > 0)
		printf("%f is positive.\n",n);
	else if (n <0)
		printf("%f is negative.\n",n);
	else
		printf("%f is zero.\n",n);

	/* Example 5 */
	char c1;
	printf("Enter a character.\n");
	fflush(stdin);fflush(stdout);
	scanf("%c",&c1);
	if (c1 >= 65 && c1<=90)
		printf("%c is a character.\n",c1);
	else if (c1 >= 97 && c1 <= 122)
		printf("%c is a character.\n",c1);
	else
		printf("%c is not a character.\n",c1);

	/* Example 6 */
	int num,i,sum=0;
	printf("Enter an integer.\n");
	fflush(stdin);fflush(stdout);
	scanf("%d",&num);
	for (i = 1;i<=num;i++)
	{
		sum += i;
	}
	printf("Sum = %d.\n",sum);

	/* Example 7 */
	unsigned int f,counter,factorial=1;
	printf("Enter an integer.\n");
	fflush(stdin);fflush(stdout);
	scanf("%u",&f);
	if (f==0)
		printf("Factorial of zero is 1 .\n");
	else if (f==1)
		printf("Factorial of 1 is 1 .\n");
	else if (f > 0)
	{
		for (counter = f;counter >0;counter--)
			factorial *= counter;
		printf("Factorial of %u is %u\n",f,factorial);
	}
	else
		printf("Error !!! Factorial of negative number doesn't exist.\n");

	/* Example 8 */
	float o1,o2;
	char o;
	printf("Enter operator either + or - or * or /\n");
	fflush(stdin);fflush(stdout);
	scanf("%c",&o);
	printf("Enter two operands.\n");
	fflush(stdin);fflush(stdout);
	scanf("%f%f",&o1,&o2);
	switch (o)
	{
	case ('+'):
					printf("%f + %f = %f\n",o1,o2,o1+o2);break;
	case ('-'):
					printf("%f - %f = %f\n",o1,o2,o1-o2);break;
	case ('*'):
					printf("%f * %f = %f\n",o1,o2,o1*o2);break;
	case ('/'):
					printf("%f / %f = %f\n",o1,o2,o1/o2);break;
	}



	return EXIT_SUCCESS;
}
