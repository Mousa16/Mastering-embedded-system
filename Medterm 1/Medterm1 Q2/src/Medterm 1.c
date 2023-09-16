/*
 ============================================================================
 Name        : Medterm.c
 Author      : Mahmoud Mousa
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void squareroot(int n);
int main(void)
{

	int n;
	printf("Enter a number : ");
	fflush(stdout);fflush(stdin);
	scanf("%d",&n);
	squareroot(n);
	return EXIT_SUCCESS;
}
void squareroot(int n)
{
	float s;
	int i,c,mid = n/2;
	for (c = 0 ; c < 50 ; c++){
		if (mid *mid == n){
			s = mid;
			break;}
		if (mid * mid > n)
			mid /= 2;
		else
			mid = (mid + mid*2)/2;
		if (mid < n/2 && mid * mid < n){
			for(i = 0 ; i < 50 ; i++){
				s = mid + i;
				if ((mid + i)*(mid + i) == n)
					break;
				if ((mid + i)*(mid + i) > n){
					s -= 1;
					break;
				}
			}
		}
	}
	for (i = 0 ; i < 1000 ; i++){
		s = s + 0.001;
		if (s * s >= n){
			s = s - 0.001;
			break;}
	}
	printf("The square root is %.3f",s);
}
