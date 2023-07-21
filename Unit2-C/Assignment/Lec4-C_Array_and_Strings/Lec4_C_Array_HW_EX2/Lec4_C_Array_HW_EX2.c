/*
 ============================================================================
 Name        : Lec4_C_Array_HW_EX2.c
 Author      : Thomas Medhat
 Date        : May 6 , 2023
 Description : Write a C program to calculate average using arrays
 	 	 	 	 this code will not work if user entered n = 100
 ============================================================================
 */

#include <stdio.h>


int main(void)
{
	unsigned int i = 0 , n = 0  ;
	float a[100];
	printf("Enter the number of data : ");
	fflush(stdin);
	fflush(stdout);
	scanf("%u",&n);
	for (i = 0 ; i < n ; i++)
	{
		printf("Enter number : ");
		fflush(stdin);
		fflush(stdout);
		scanf("%f",&a[i]);
	}
	a[n] = 0;
	for (i = 0 ; i < n ; i++)
	{
		a[n] = a[n] + a[i];
	}
	a[n] = a[n]/n;
	printf("Average = %f\n",a[n]);
	return 0;
}
