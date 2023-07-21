/*
 * main.c
 *
 *  Created on: May 2, 2023
 *  Author: Thomas Medhat
 *  Info: program of traingle number
 */


#include<stdio.h>


int main()
{
	int number = 0 ;
	for (int i = 0 ; i < 10 ;i++)
	{
		printf("%d\t",i);
		if (i == 9 && number < 9)
		{
			i = number;
			number++;
			printf("\n");
		}

	}

	return 0;
}



