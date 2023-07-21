/*
 * main.c
 *
 *  Created on: May 2, 2023
 *  Author: Thomas Medhat
 *  Info: Comparing Three Numbers
 */


#include<stdio.h>


int main()
{
	int number1 = 0 ,number2 = 0 ,number3 = 0 ;
	printf("Enter three numbers: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d %d %d",&number1,&number2,&number3);
	if ((number1 >= number2) && (number1 >= number3))
	{
		printf("\n\nLargest value = %d\n",number1);
	}
	else if ((number2 >= number1) && (number2 >= number3))
	{
		printf("\n\nLargest value = %d\n",number2);
	}
	else if ((number3 >= number1) && (number3 >= number2))
	{
		printf("\n\nLargest value = %d\n",number3);
	}
	else
	{
		printf("\n\nError\n");
	}
	return 0;
}



