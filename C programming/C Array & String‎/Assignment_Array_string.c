/*
 ============================================================================
 Name        : Assignment_Array_string.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	// Example 1

	float a [2][2];
	float b[2][2];
	int c=0,i=0;
	printf("Enter the elements of the first matrix.\n");
	for (c=0;c<2;c++)
	{
		for (i=0;i<2;i++)
		{
			printf("Enter a%d%d\n",c+1,i+1);
			fflush(stdin);fflush(stdout);
			scanf("%f",&a[c][i]);
		}
	}
	printf("Enter the elements of the second matrix.\n");
	for (c=2;c<4;c++)
	{
		for (i=2;i<4;i++)
		{
			printf("Enter b%d%d\n",c-1,i-1);
			fflush(stdin);fflush(stdout);
			scanf("%f",&b[c-2][i-2]);
		}
	}
	printf("Sum of the matrix :");
	for (c=0;c<2;c++)
	{
		printf("\n");
		for (i=0;i<2;i++)
		{
			printf("%.2f\t",a[c][i]+b[c][i]);
		}
	}

	// Example 2
	int no_data;float sum=0;
	printf("\nEnter the number of data.\n");
	fflush(stdin);fflush(stdout);
	scanf("%d",&no_data);
	float arr[no_data];
	for (i = 0;i<no_data;i++)
	{
		printf("%d. Enter number : ",i+1);
		fflush(stdin);fflush(stdout);
		scanf("%f",&arr[i]);
		sum+=arr[i];
	}
	printf("Average = %.2f\n",sum/no_data);

	// Example 3
	int row,column;
	printf("Enter rows and columns of the matrix.\n");
	fflush(stdin);fflush(stdout);
	scanf("%d%d",&row,&column);
	float arr1[row][column];
	for (i=0;i<row;i++)
	{
		for (c=0;c<column;c++)
		{
			printf("Enter a%d%d\n",i+1,c+1);
			fflush(stdin);fflush(stdout);
			scanf("%f",&arr1[i][c]);
		}
	}
	printf("Entered matrix :\n");
	for (i=0;i<row;i++)
	{
		for (c=0;c<column;c++)
		{
			printf("%.2f\t",arr1[i][c]);
		}
		printf("\n");
	}
	printf("Transpose of matrix :\n");
	for (i=0;i<column;i++)
	{
		for (c=0;c<row;c++)
		{
			printf("%.2f\t",arr1[c][i]);
		}
		printf("\n");
	}

	// Example 4
	int p;float n;
	i = 0;
	printf("Enter number of elements.\n");
	fflush(stdin);fflush(stdout);
	scanf("%d",&i);
	float arr2[i];
	for (c = 0;c<i;c++)
	{
		arr2[c]=c+1;
		printf("%.2f\t",arr2[c]);
	}
	printf("\nEnter the element to be inserted : ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&n);
	printf("\nEnter the position :");
	fflush(stdin);fflush(stdout);
	scanf("%d",&p);
	for (c = 0;c<i;c++)
	{
		arr2[c]=c+1;
		if (c +1 == p)
			printf("%.2f\t",n);
		printf("%.2f\t",arr2[c]);
	}

	// Example 5
	printf("\nEnter number of elements.\n");
	fflush(stdin);fflush(stdout);
	scanf("%d",&i);
	int arr3[i];
	for (c = 0;c<i;c++)
	{
		arr3[c]=(c+1)*11;
		printf("%d\t",arr3[c]);
	}
	printf("\nEnter the element to be searched :\n");
	fflush(stdin);fflush(stdout);
	scanf("%d",&p);
	for (c=0;c<=i;c++)
	{
		if (arr3[c]==p)
		{
			printf("Number found at location : %d\n",c+1);break;
		}
		if (c == i)
			printf("Number not found.\n");
	}

	// Example 6

	char text [100];char _char;
	i=0,c=0;
	printf("Enter a string.\n");
	fflush(stdin);fflush(stdout);
	gets(text);
	printf("Enter a character to find frequency.\n");
	fflush(stdin);fflush(stdout);
	scanf("%c",&_char);
	for (i=0;i<100;i++)
	{
		if (text[i]==_char)
			c += 1;
		else if (text[i]==0)
			break;
	}
	printf("Frequency of %c = %d\n",_char,c);

	// Example 7

	char text2[100];
	c=0,i=0;
	printf("Enter a string.\n");
	fflush(stdin);fflush(stdout);
	gets(text2);
	for (i=0;i<100;i++)
	{
		if (text2[i]==0)
			break;
	}
	printf("Length of string = %d\n",i);

	//Example 8
	char text3[100];char text4[100];
	c=0,i=0;
	printf("Enter a string.\n");
	fflush(stdin);fflush(stdout);
	gets(text3);
	for (i=strlen(text3)-1;i>=0;i--)
	{
		text4[i] = text3[c];
		c++;
	}
	printf("Reverse string is : %s\n",text4);

	return EXIT_SUCCESS;
}
