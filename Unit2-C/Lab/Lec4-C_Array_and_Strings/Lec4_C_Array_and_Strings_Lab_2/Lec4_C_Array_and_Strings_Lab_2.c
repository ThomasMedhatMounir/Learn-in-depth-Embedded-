/*
 ============================================================================
 Name        : Lec4_C_Array_and_Strings_Lab_2.c
 Author      : Thomas Medhat
 Date        : May 5,2023
 Description : Calculate Polynomial Value for a Set of Inputs
 ============================================================================
 */

#include <stdio.h>


int main(void)
{
	float x[5] = {5, 16 , 22 , 3.5 , 15};
	float y;
	int i = 0;
	for (i = 0 ; i < 5 ; i++)
	{
		y = 5 * x[i] * x[i] + 3 * x[i] + 2 ;
		printf("y(%f) = %f\r\n",x[i],y);
	}
	return 0;
}
