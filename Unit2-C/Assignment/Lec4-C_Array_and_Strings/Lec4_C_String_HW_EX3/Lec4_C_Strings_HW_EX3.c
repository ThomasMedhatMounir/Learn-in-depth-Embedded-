/*
 ============================================================================
 Name        : Lec4_C_Strings_HW_EX3.c
 Author      : Thomas Medhat
 Date        : May 6 , 2023
 Description : Write a C program to reverse String without using library function
 ============================================================================
 */

#include <stdio.h>


int main(void)
{
	char st[100];
	char revST[100];
	short int len = 0,i = 0;
	printf("Enter a string : ");
	fflush(stdin);
	fflush(stdout);
	gets(st);
	while(st[len] != '\0')
	{
		len++;
	}
	for (i = 0 ; i < len ; i++)
	{
		revST[len-i-1] = st[i];
	}
	revST[i] = '\0';
	printf("Reverse string is : %s\n",revST);
	return 0 ;
}
