/*
 * main.c
 *
 *  Created on: May 3, 2023
 *  Author: Thomas Medhat
 *  Info:  Write C Program to find factorial of a number
 */

#include<stdio.h>


int main()
{
	unsigned int i = 0 , fact = 1 ;
	int number = 0;
	printf("Enter an Integer : ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&number);
	if (number > 0)
	{
		for (i = 1 ; i <= number ; i++)
		{
			fact = fact * i ;
		}
		printf("Factorial = %d\n",fact);

	}
	else if (number == 0)
	{
		printf("Factorial = 1\n");
	}
	else
	{
		printf("Error!! Factorial of negative number does not exist\n");
	}
	return 0;
}
