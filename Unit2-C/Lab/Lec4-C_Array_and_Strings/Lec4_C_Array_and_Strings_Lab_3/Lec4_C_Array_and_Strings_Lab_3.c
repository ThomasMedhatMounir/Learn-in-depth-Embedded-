/*
 ============================================================================
 Name        : Lec4_C_Array_and_Strings_Lab_3.c
 Author      : Thomas Medhat
 Date        : May 5 , 2023
 Description : LAB: Calculate and Print the Transpose of 3x3 Matrix
 ============================================================================
 */

#include <stdio.h>


int main(void)
{
	float m[3][3],mTrans[3][3];
	int i = 0 , j = 0;
	for (i = 0 ; i < 3 ; i++)
	{
		for (j = 0 ; j < 3 ; j++)
		{
			printf("Enter the item (%d , %d) : ",i,j);
			fflush(stdin);
			fflush(stdout);
			scanf("%f",&m[i][j]);
		}
	}


	printf("The Matrix is \n");
	for (i = 0 ; i < 3 ; i++)
	{
		for (j = 0 ; j < 3 ; j++)
		{
			printf("%f\t",m[i][j]);
		}
		printf("\n");
	}


	for (i = 0 ; i < 3 ; i++)
	{
		for (j = 0 ; j < 3 ; j++)
		{
			mTrans[j][i] = m[i][j];
		}
	}

	printf("The Matrix Transpose is \n");
	for (i = 0 ; i < 3 ; i++)
	{
		for (j = 0 ; j < 3 ; j++)
		{
			printf("%f\t",mTrans[i][j]);
		}
		printf("\n");
	}
	return 0;
}
