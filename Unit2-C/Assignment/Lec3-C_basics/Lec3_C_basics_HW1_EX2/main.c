/*
 * main.c
 *
 *  Created on: May 3, 2023
 *  Author: Thomas Medhat
 *  Info:  Write C Program to Print a Integer Entered by a User
 */

#include<stdio.h>


int main()
{
	int number = 0 ;
	printf("Enter an Integer : ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&number);
	printf("You Entered : %d\n",number);
    return 0;
}
