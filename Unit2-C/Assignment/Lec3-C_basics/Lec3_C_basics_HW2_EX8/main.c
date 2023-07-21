/*
 * main.c
 *
 *  Created on: May 3, 2023
 *  Author: Thomas Medhat
 *  Info:  Write C Program to make a simple calculator to add, subtract, multiply or divide
 */

#include<stdio.h>


int main()
{
	char operator = 0 ;
	float number1 = 0.0 , number2 = 0.0 , result = 0.0 ;
	printf("Enter operator either + or - or * or / : ");
	fflush(stdin);
	fflush(stdout);
	scanf("%c",&operator);
	if (operator == '+' || operator == '-' || operator == '*' || operator == '/')
	{
		printf("Enter two operands : ");
		fflush(stdin);
		fflush(stdout);
		scanf("%f %f",&number1,&number2);
		switch (operator)
		{
		case '+':
			result = number1 + number2;
			break;
		case '-':
			result = number1 - number2;
			break;
		case '*':
			result = number1 * number2;
			break;
		case '/':
			result = number1 / number2;
			break;
		default:
			// Error
			break;
		}
		printf("%f %c %f = %f\n",number1,operator,number2,result);
	}
	else
	{
		printf("Wrong Operator\n");
	}

	return 0;
}
