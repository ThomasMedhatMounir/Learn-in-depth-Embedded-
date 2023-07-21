/*
 * main.c
 *
 *  Created on: May 3, 2023
 *  Author: Thomas Medhat
 *  Info:  Write C Program to check whether a number is positive or negative
 */

#include<stdio.h>


int main()
{
	float number = 0.0 ;
	printf("Enter a number : ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f",&number);
	if (number > 0)
	{
		printf("%f is positive\n",number);
	}
	else if (number == 0)
	{
		printf("You Entered zero\n");
	}
	else if (number < 0)
	{
		printf("%f is negative\n",number);
	}
	else
	{
		// do nothing
	}
	return 0;
}
