/*
 * main.c
 *
 *  Created on: May 3, 2023
 *  Author: Thomas Medhat
 *  Info:  Write Source Code to Swap Two Numbers
 */

#include<stdio.h>


int main()
{
	float a = 0 , b = 0 , temp = 0;
	printf("Enter value of a : ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f",&a);
	printf("Enter value of b : ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f",&b);
	temp = a ;
	a = b ;
	b = temp ;
	printf("\nAfter swapping, value of a = %f\nAfter swapping, value of b = %f\n",a,b);
	return 0;
}
