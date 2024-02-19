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

	printf("C programming \n");

	/* Example 2 */
	int x;
	printf("Enter an integer.\n");
	fflush(stdin);fflush(stdout);
	scanf("%d",&x);
	printf("You entered : %d\n",x);

	/* Example 3 */
	int y,z;
	printf("Enter two integers.\n");
	fflush(stdin);fflush(stdout);
	scanf("%d%d",&y,&z);
	printf("Sum = %d\n",y+z);

	/* Example 4 */
	float n1,n2;
	printf("Enter two numbers.\n");
	fflush(stdin);fflush(stdout);
	scanf("%f%f",&n1,&n2);
	printf("Product = %f\n",n1*n2);

	/* Example 5 */
	char c;
	printf("Enter a character.\n");
	fflush(stdin);fflush(stdout);
	scanf("%c",&c);
	printf("ASCII value of %c is %d\n",c,c);

	/* Example 6 */
	float a,b,temp;
	printf("Enter value of a.\n");
	fflush(stdin);fflush(stdout);
	scanf("%f",&a);
	printf("Enter value of b.\n");
	fflush(stdin);fflush(stdout);
	scanf("%f",&b);
	temp = a;a=b;b=temp;
	printf("After swapping, value of a = %f\n",a);
	printf("After swapping, value of b = %f\n",b);

	/* Example 7 */
	float a1,b1;
	printf("Enter value of a.\n");
	fflush(stdin);fflush(stdout);
	scanf("%f",&a1);
	printf("Enter value of b.\n");
	fflush(stdin);fflush(stdout);
	scanf("%f",&b1);
	a1 = a1+b1;b1 = a1 - b1;a1 = a1 - b1;
	printf("After swapping, value of a = %f\n",a1);
	printf("After swapping, value of b = %f\n",b1);
	return EXIT_SUCCESS;

}
