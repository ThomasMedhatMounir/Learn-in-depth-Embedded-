/*
 * main.c
 *
 *  Created on: May 3, 2023
 *  Author: Thomas Medhat
 *  Info:  Write C Program to check whether a character is alphabet or not
 */

#include<stdio.h>


int main()
{
	char character = 0 ;
	printf("Enter a character : ");
	fflush(stdin);
	fflush(stdout);
	scanf("%c",&character);
	if ((character >= 'A' && character <= 'Z') || (character >= 'a' && character <= 'z'))
	{
		printf("%c is alphabet\n",character);
	}
	else
	{
		printf("%c is not alphabet\n",character);
	}
	return 0;
}
