/*
 ============================================================================
 Name        : Lec5_C_Function_HW_EX2.c
 Author      : Thomas Medhat
 Description : Factorial using Recursion
 ============================================================================
 */

#include <stdio.h>


unsigned long calFactorial(unsigned int number);

int main(void) {
	unsigned int number = 0;
	unsigned long factorialVal = 0;
	printf("Enter Number : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&number);
	factorialVal = calFactorial(number);
	printf("Factorial of %d is %ld\n",number,factorialVal);
	return 0;
}

unsigned long calFactorial(unsigned int number){
	if(number == 0){
		return 1;
	}
	else{
		return number * calFactorial(number-1);
	}


}
