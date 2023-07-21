/*
 ============================================================================
 Name        : Lec4_C_Array_HW_EX3.c
 Author      : Thomas Medhat
 Date        : May 6 , 2023
 Description : Write a C program to find transpose of a matrix
 ============================================================================
 */

#include <stdio.h>


int main(void)
{
	float m[100][100],mTrans[100][100];
	unsigned int r = 0 , c = 0 , i = 0 , j = 0 ;
	printf("Enter rows and column of matrix : ");
	fflush(stdin);
	fflush(stdout);
	scanf("%u %u",&r,&c);
	printf("Enter elements of matrix : \n");
	for (i = 0 ; i < r ; i++)
	{
		for (j = 0 ; j < c ; j++)
		{
			printf("Enter element a%u%u : ",i+1,j+1);
			fflush(stdin);
			fflush(stdout);
			scanf("%f",&m[i][j]);
		}
	}


	printf("The Matrix is \n");
	for (i = 0 ; i < r ; i++)
	{
		for (j = 0 ; j < c ; j++)
		{
			printf("%f\t",m[i][j]);
		}
		printf("\n");
	}


	for (i = 0 ; i < r ; i++)
	{
		for (j = 0 ; j < c ; j++)
		{
			mTrans[j][i] = m[i][j];
		}
	}

	printf("Transpose of Matrix \n");
	for (i = 0 ; i < c ; i++)
	{
		for (j = 0 ; j < r ; j++)
		{
			printf("%f\t",mTrans[i][j]);
		}
		printf("\n");
	}
	return 0 ;
}
