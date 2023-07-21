/*
 * main.c
 *
 *  Created on: May 2, 2023
 *  Author: Thomas Medhat
 *  Info: Calculate the Summation of values between 1 and 99
 */


#include<stdio.h>


int main()
{
	int sum = 0 ;
	for(int i = 1 ; i < 100 ; i++)
	{
		sum = sum + i ;
	}
	printf("\nThe summation of values between 1 and 99 is %d\n",sum);
	return 0;
}



