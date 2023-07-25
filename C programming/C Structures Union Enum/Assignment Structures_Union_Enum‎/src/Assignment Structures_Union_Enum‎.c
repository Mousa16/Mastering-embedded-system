/*
 ============================================================================
 Name        : Assignment.c
 Author      : Mahmoud Mousa
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define PI 3.1415
#define Area PI*r*r

struct Sstudent{
int m_roll;
float m_marks;
char m_name[30];
} s,a[10] ;

struct Sadd{
float m_feet;
float m_inch;
} x,y,z ;

struct Scomplex{
float m_real;
float m_imag;
} n1,n2;
int main(void) {
	printf("******************** Example 1 ***********************\n");

	printf("Enter information of students. \n\n");
	printf("Enter name : ");
	fflush(stdin);fflush(stdout);
	gets(s.m_name);
	printf("Enter roll number : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&s.m_roll);
	printf("Enter marks : ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&s.m_marks);

	printf("\nDisplaying information.\n\n");
	printf("Name : %s\n",s.m_name);
	printf("Roll number : %d\n",s.m_roll);
	printf("Marks : %.2f\n",s.m_marks);

	printf("********************* Example 2 **********************\n");

	printf("Enter information about first distance.\n");
	printf("Enter feet : ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&x.m_feet);
	printf("Enter inches : ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&x.m_inch);

	printf("Enter information about second distance.\n");
	printf("Enter feet : ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&y.m_feet);
	printf("Enter inches : ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&y.m_inch);
	z.m_feet = x.m_feet + y.m_feet;
	z.m_inch = x.m_inch + y.m_inch;
	if (z.m_inch >= 12){
		z.m_feet += 1;z.m_inch -= 12;
	}
	printf("Sum of distances = %.2f' %.2f\"\n",z.m_feet,z.m_inch);

	printf("*********************** Example 3 ********************\n\n");

	printf("For first complex number.\n");
	printf("Enter real and imaginary respectively :");
	fflush(stdin);fflush(stdout);
	scanf("%f %f",&n1.m_real,&n1.m_imag);
	printf("For first complex number.\n");
	printf("Enter real and imaginary respectively :");
	fflush(stdin);fflush(stdout);
	scanf("%f %f",&n2.m_real,&n2.m_imag);
	printf("Sum = %.2f + %.2fi\n",n1.m_real+n2.m_real,n1.m_imag+n2.m_imag);

	printf("********************** Example 4 *********************\n\n");
	int c;
	printf("Enter information of students.\n");
	for (c = 0 ; c <10 ; c++){
		a[c].m_roll=c+1;
		printf("For roll number %d\n",a[c].m_roll);
		printf("Enter name : ");
		fflush(stdin);fflush(stdout);
		gets(a[c].m_name);
		printf("Enter marks : ");
		fflush(stdin);fflush(stdout);
		scanf("%f",&a[c].m_marks);
	}
	printf("Displaying information of students.\n");
	for (c = 0 ; c <10 ; c++){
		printf("\nInformation for roll number %d\n",a[c].m_roll);
		printf("Name : %s\n",a[c].m_name);
		printf("Marks : %.2f\n",a[c].m_marks);
	}

	printf("********************* Example 5 **********************\n\n");
	float r;
	printf("Enter the radius : ");
	fflush(stdin);fflush(stdout);
	scanf("%f", &r);
	printf("Area= %.2f",Area);

	printf("********************* Example 6 **********************\n\n");
	printf("Size of union = 4 bytes.\n");
	printf("Size of structure = 12 bytes.\n");




















	return EXIT_SUCCESS;
}
