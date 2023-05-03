/*
 * main.c
 *
 *  Created on: May 2, 2023
 *  Author: Thomas Medhat
 *  Info:  Circle Area or Circumference
 */

#include<stdio.h>


int main()
{
	unsigned char choice = 0;
    float radius = 0;
    float val = 0;
    printf("Enter Circle radius: ");
    fflush(stdin);
    fflush(stdout);
    scanf("%f",&radius);
    printf("\nEnter your choice (a to print the area , c to print circumference): ");
    fflush(stdin);
    fflush(stdout);
    scanf("%c",&choice);
    if (choice == 'a')
    {
    	val = 3.14159 * radius * radius ;
    	printf("\n\nArea = %f\n",val);
    }
    else if (choice == 'c')
    {
    	val = 2 * 3.14159 * radius ;
    	printf("\n\nCircumference = %f\n",val);
    }
    else
    {
    	printf("\n\nWrong Entry Please try again\n");
    }
    return 0;
}
