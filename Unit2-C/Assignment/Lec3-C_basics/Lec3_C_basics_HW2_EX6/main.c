/*
 * main.c
 *
 *  Created on: May 3, 2023
 *  Author: Thomas Medhat
 *  Info:  Write C Program to calculate some of natural numbers
 */

#include<stdio.h>


int main()
{
	unsigned int i = 0 , number = 0 , sum = 0 ;
	printf("Enter an Integer : ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&number);
	for (i = 1 ; i <= number ; i++)
	{
		sum = sum + i ;
	}
	printf("Sum = %d\n",sum);

	return 0;
}
