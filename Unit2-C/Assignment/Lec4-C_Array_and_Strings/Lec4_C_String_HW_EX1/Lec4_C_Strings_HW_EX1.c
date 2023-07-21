/*
 ============================================================================
 Name        : Lec4_C_Strings_HW_EX1.c
 Author      : Thomas Medhat
 Date        : May 6 , 2023
 Description : Write a C program to find the frequency of characters in a string
 ============================================================================
 */

#include <stdio.h>


int main(void)
{
	char st[100],ch;
	int i = 0,count = 0;
	printf("Enter a string : ");
	fflush(stdin);
	fflush(stdout);
	gets(st);
	printf("Enter a character to find frequency : ");
	fflush(stdin);
	fflush(stdout);
	ch = getchar();
	while(st[i] != '\0')
	{
		if (st[i] == ch)
		{
			count++;
		}
		else
		{
			/* do nothing */
		}
		i++;
	}
	printf("Frequency of %c = %u\n",ch,count);
	return 0 ;
}
