/*
 * main.c
 *
 *  Created on: May 3, 2023
 *  Author: Thomas Medhat
 *  Info:  Write Source Code to Swap Two Numbers without temp variable.
 *  it is an interview trick >>>>>>>>>>>>>>>>>>> important
 */

#include<stdio.h>


#define METHOD 0


# if METHOD == 0
int main()
{
	float a = 0.0 , b = 0.0 ;
	printf("Enter value of a : ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f",&a);
	printf("Enter value of b : ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f",&b);
	a = a + b ;
	b = a - b ;
	a = a - b ;
	printf("\nAfter swapping, value of a = %f\nAfter swapping, value of b = %f\n",a,b);
	return 0;
}

# elif METHOD == 1

int main()
{
	float a = 0.0 , b = 0.0 ;
	printf("Enter value of a : ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f",&a);
	printf("Enter value of b : ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f",&b);
	a = a * b ;
	b = a / b ;
	a = a / b ;
	printf("\nAfter swapping, value of a = %f\nAfter swapping, value of b = %f\n",a,b);
	return 0;
}

# elif METHOD == 2
// method 2 problem is that it can not be used with float
int main()
{
	int a = 0 , b = 0 ;
	printf("Enter value of a : ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&a);
	printf("Enter value of b : ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&b);
	a = a ^ b ;
	b = a ^ b ;
	a = a ^ b ;
	printf("\nAfter swapping, value of a = %d\nAfter swapping, value of b = %d\n",a,b);
	return 0;
}

#endif

