/*
 * main.c
 *
 *  Created on: May 3, 2023
 *  Author: Thomas Medhat
 *  Info:  Write C Program to Check whether a number is even or odd
 */

#include<stdio.h>


int main()
{
	int number = 0 ;
	printf("Enter an integer you want to check : ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&number);
	if (number%2 == 0)
	{
		printf("%d is even\n",number);
	}
	else
	{
		printf("%d is odd\n",number);
	}
    return 0;
}
