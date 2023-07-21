/*
 * main.c
 *
 *  Created on: May 3, 2023
 *  Author: Thomas Medhat
 *  Info:  Write C Program to Check vowel or consonant
 */

#include<stdio.h>


int main()
{
	char character = 0 ;
	printf("Enter an alphabet : ");
	fflush(stdin);
	fflush(stdout);
	scanf("%c",&character);
	if (character == 'a' || character == 'A' || character == 'e' || character == 'E' ||
		character == 'i' || character == 'I' || character == 'o' || character == 'O' ||
		character == 'u' || character == 'U')
	{
		printf("%c is vowel\n",character);
	}
	else
	{
		printf("%c is consonant\n",character);
	}
    return 0;
}
