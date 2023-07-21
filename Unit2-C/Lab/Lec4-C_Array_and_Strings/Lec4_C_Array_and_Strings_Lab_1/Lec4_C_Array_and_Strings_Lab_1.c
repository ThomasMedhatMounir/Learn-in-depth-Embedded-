/*
 ============================================================================
 Name        : Lec4_C_Array_and_Strings_Lab_1.c
 Author      : Thomas Medhat
 Data     	 : May 5,2023
 Description : Store and Print 10 Students Degrees
 ============================================================================
 */

#include <stdio.h>


int main(void) {
	int i = 0;
	float degrees[10];
	for (i = 0 ; i < 10 ; i++)
	{
		printf("Enter student %d degree : ",i+1);
		fflush(stdin);
		fflush(stdout);
		scanf("%f",&degrees[i]);
		printf("\n");
	}
	for (i = 0 ; i < 10 ; i++)
	{
		printf("Enter student %d degree is %f\n",i+1,degrees[i]);
	}
	return 0;
}
