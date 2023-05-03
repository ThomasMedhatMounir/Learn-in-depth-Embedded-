/*
 * main.c
 *
 *  Created on: May 2, 2023
 *  Author: Thomas Medhat
 *  Info: calculates the average students degree for any given students number
 */


#include<stdio.h>


int main()
{
	int StudentNumber = 0 , StudentGrade = 0 ;
	float Average;
	printf("Enter Student Grades : ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&StudentNumber);
	for(int i = 1 ; i <= StudentNumber ; i++)
	{
		printf("Student %d : ",i);
		fflush(stdin);
		fflush(stdout);
		scanf("%d",&StudentGrade);
		Average = Average + StudentGrade ;
	}
	Average = Average/StudentNumber;
	printf("\nThe Average of student grades %f\n",Average);
	return 0;
}



