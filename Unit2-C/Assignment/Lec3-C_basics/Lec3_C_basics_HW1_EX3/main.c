/*
 * main.c
 *
 *  Created on: May 3, 2023
 *  Author: Thomas Medhat
 *  Info:  Write C Program to Add Two Integers
 */

#include<stdio.h>


int main()
{
	int number1 = 0 , number2 = 0 ;
	printf("Enter two Integers : ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d %d",&number1,&number2);
	printf("Sum : %d\n",number1+number2);
    return 0;
}
