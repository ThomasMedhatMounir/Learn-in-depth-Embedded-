/*
 * main.c
 *
 *  Created on: May 3, 2023
 *  Author: Thomas Medhat
 *  Info:  Write C Program to Multiply two Floating Point Numbers
 */

#include<stdio.h>


int main()
{
	float number1 = 0.0 , number2 = 0.0 ;
	printf("Enter two numbers : ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f %f",&number1,&number2);
	printf("Product : %f\n",number1*number2);
    return 0;
}
