/*
 ============================================================================
 Name        : Lec4_C_Array_HW_EX1.c
 Author      : Thomas Medhat
 Date        : May 6 , 2023
 Description : Write a C program to find sum of two matrix of order 2*2
 ============================================================================
 */

#include <stdio.h>


int main(void)
{
	unsigned char i = 0 , j = 0 ;
	float a[2][2],b[2][2],sum[2][2];
	printf("Enter the elements of the first matrix\n");
	for (i = 0 ; i < 2 ; i++)
	{
		for (j = 0 ; j < 2 ; j++)
		{
			printf("Enter a%d%d : ",i+1,j+1);
			fflush(stdin);
			fflush(stdout);
			scanf("%f",&a[i][j]);
		}
	}
	printf("Enter the elements of the second matrix\n");
	for (i = 0 ; i < 2 ; i++)
	{
		for (j = 0 ; j < 2 ; j++)
		{
			printf("Enter b%d%d : ",i+1,j+1);
			fflush(stdin);
			fflush(stdout);
			scanf("%f",&b[i][j]);
		}
	}

	printf("Sum of matrix : \n");
	for (i = 0 ; i < 2 ; i++)
	{
		for (j = 0 ; j < 2 ; j++)
		{
			sum[i][j] = a[i][j] + b[i][j] ;
			printf("%f\t",sum[i][j]);
		}
		printf("\n");
	}

	return 0;
}
