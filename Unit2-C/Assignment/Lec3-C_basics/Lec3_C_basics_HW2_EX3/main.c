/*
 * main.c
 *
 *  Created on: May 3, 2023
 *  Author: Thomas Medhat
 *  Info:  Write C Program to find the largest number among three numbers
 */

#include<stdio.h>


int main()
{
	float number1 = 0.0 , number2 = 0.0 , number3 = 0.0 ;
	printf("Enter three numbers : ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f %f %f",&number1,&number2,&number3);
	if (number1 >= number2 && number1 >= number3)
	{
		printf("Largest Number = %f\n",number1);
	}
	else if (number2 >= number1 && number2 >= number3)
	{
		printf("Largest Number = %f\n",number2);
	}
	else if (number3 >= number1 && number3 >= number2)
	{
		printf("Largest Number = %f\n",number3);
	}
	else
	{
		printf("Error\n");
	}
	return 0;
}
