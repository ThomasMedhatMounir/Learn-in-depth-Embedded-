/*
 ============================================================================
 Name        : Lec4_C_Strings_HW_EX2.c
 Author      : Thomas Medhat
 Date        : May 6 , 2023
 Description : Write a C program to find the length of a string
 ============================================================================
 */

#include <stdio.h>


int main(void)
{
	char st[100],i = 0;
	printf("Enter a string : ");
	fflush(stdin);
	fflush(stdout);
	gets(st);
	while(st[i] != '\0')
	{
		i++;
	}
	printf("Length of string : %u\n",i);
	return 0 ;
}
