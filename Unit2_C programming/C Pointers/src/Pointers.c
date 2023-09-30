/*
 ============================================================================
 Name        : Pointers.c
 Author      : Mahmoud Mousa
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

struct SEmployee{
	unsigned short m_id;
	char m_name[10];
};

int main(void) {
	printf("**********************************Example 1*****************\n");
	int m = 29;
	printf("Address of m : %x\n",(unsigned int)&m);
	printf("Value of m : %d\n",m);

	int *ab = &m;
	printf("Address of pointer ab : %x\n",(unsigned int)ab);
	printf("Content of pointer ab : %d\n",*ab);

	m = 34;
	printf("Address of pointer ab : %x\n",(unsigned int)ab);
	printf("Content of pointer ab : %d\n",*ab);

	*ab = 7;
	printf("Address of pointer ab : %x\n",(unsigned int)ab);
	printf("Content of pointer ab : %d\n",*ab);

	printf("**********************************Example 2*****************\n");

	char *ptr="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i = 0;
	for(i = 0;i<26;i++)
		printf("%c \n",(unsigned int)*ptr++);

	printf("**********************************Example 3******************\n");
	char str[50]; i = 0;
	printf("Input a string.\n");
	fflush(stdin);fflush(stdout);
	gets(str);
	for(i = 0 ; i < 50 ; i++){
		if(str[i]==0)
			break;
	}
	char *pstr = &str[i-1];
	for (;i >0;i--)
		printf("%c",*pstr--);
	printf("\n");
	printf("********************************* Example 4 ******************\n");

	int n_data,c,arr[20];
	printf("Input the number of elements to store in the array (max 20):\n");
	fflush(stdin);fflush(stdout);
	scanf("%d",&n_data);
	for (c = 0;c < n_data;c++){
		printf("element - %d : ",c+1);
		fflush(stdin);fflush(stdout);
		scanf("%d",&arr[c]);
	}
	int *parr = &arr[n_data-1];
	printf("The elements of array in reverse order are :\n");
	for (;n_data >0;n_data--){
		printf("element - %d : %d\n",n_data,*parr--);
	}
	printf("******************************* Example 5 *******************\n");

	struct SEmployee emp1={1001,"John"},emp2={1002,"Alex"},emp3={1003,"Taylor"};
	struct SEmployee (*emp[3])={&emp1,&emp2,&emp3};
	struct SEmployee (*(*pt)[3])=&emp;

	printf("Employee name : %s\n",(**(*pt+1)).m_name);
	printf("Employee ID : %d\n",(**(*pt+1)).m_id);





	return EXIT_SUCCESS;
}
