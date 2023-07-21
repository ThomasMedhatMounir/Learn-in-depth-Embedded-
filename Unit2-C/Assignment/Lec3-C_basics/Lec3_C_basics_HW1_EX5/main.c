/*
 * main.c
 *
 *  Created on: May 3, 2023
 *  Author: Thomas Medhat
 *  Info:  Write C Program to Find ASCII Value of a Character
 */

#include<stdio.h>


int main()
{
	char character = 0.0;
	printf("Enter a character : ");
	fflush(stdin);
	fflush(stdout);
	scanf("%c",&character);
	printf("ASCII value of %c = %d\n",character,character);
    return 0;
}
