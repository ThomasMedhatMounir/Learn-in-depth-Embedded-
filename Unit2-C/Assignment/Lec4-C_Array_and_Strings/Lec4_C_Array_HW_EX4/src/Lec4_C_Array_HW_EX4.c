/*
 ============================================================================
 Name        : Lec4_C_Array_HW_EX4.c
 Author      : Thomas Medhat
 Date        : May 6 , 2023
 Description : Write a C program to insert an element in an array
 ============================================================================
 */

#include <stdio.h>


int main(void)
{
	int m[100];
	int n = 0 , i = 0 , e = 0 , l = 0 ;
	printf("Enter no of elements : ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&n);
	for (i = 0 ; i < n ; i++)
	{
		m[i] = i + 1 ;
		printf("%d ",m[i]);
	}
	printf("\nEnter the element to be inserted : ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&e);
	printf("Enter the location : ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&l);
	if (l < n)
	{
		for (i = n-1 ; i >= l-1 ; i--)
		{
			m[i+1] = m[i];
		}
		m[l-1] = e ;
		n++;
	}
	else
	{
		m[l-1] = e ;
		n = l;
	}

	for (i = 0 ; i < n ; i++)
	{
		printf("%d ",m[i]);
	}

	return 0 ;
}
