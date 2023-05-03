/*
 * main.c
 *
 *  Created on: May 2, 2023
 *  Author: Thomas Medhat
 *  Info: Calculate the Minimum of Two Numbers
 */


#include<stdio.h>


int main()
{
	int number1 = 0 ,number2 = 0 ;
	printf("Enter two numbers: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d %d",&number1,&number2);
	printf("\nThe Minimum is %d\n",number1<=number2?number1:number2);
	return 0;
}



