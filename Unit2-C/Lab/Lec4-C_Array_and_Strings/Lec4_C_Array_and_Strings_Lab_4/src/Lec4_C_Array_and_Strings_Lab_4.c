/*
 ============================================================================
 Name        : Lec4_C_Array_and_Strings_Lab_4.c
 Author      : Thomas Medhat
 Date        : May 5 , 2023
 Description : Define 1D array of 1000 element and fill it with random value
  	  	  	   between 1 and 1000 then search and counts the number of values
  	  	  	   that satisfy the following condition : the previous and the next
  	  	  	   value is lower than the center value
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int x[1000],i,count = 0;
	for (i = 0 ; i < 1000 ; i++)
	{
		x[i] = rand()%1000 + 1;
	}
	for (i = 1 ; i < 1000-1 ; i++)
	{
		if (x[i] > x[i-1] && x[i] > x[i+1])
		{
			count++;
		}
		else
		{
			/* do nothing */
		}
	}
	printf("Number of Elements that satisfy the condition is %d\n",count);
	return 0;
}
