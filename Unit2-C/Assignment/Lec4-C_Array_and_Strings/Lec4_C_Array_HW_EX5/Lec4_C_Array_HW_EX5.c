/*
 ============================================================================
 Name        : Lec4_C_Array_HW_EX5.c
 Author      : Thomas Medhat
 Date        : May 6 , 2023
 Description : Write a C program to search an element in an array
 ============================================================================
 */

#include <stdio.h>


int main(void)
{
	int m[100];
	int n = 0 , i = 0 , e = 0;
	printf("Enter no of elements : ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&n);
	for (i = 0 ; i < n ; i++)
	{
		m[i] = (i+1) * 11 ;
		printf("%d ",m[i]);
	}
	printf("\nEnter the element to be searched : ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&e);
	for (i = 0 ; i < n ; i++)
	{
		if (e == m[i])
		{
			break;
		}
		else
		{
			/* do nothing */
		}
	}
	printf("Number found at the location = %d\n",i+1);

	return 0 ;
}
