/*
 ============================================================================
 Name        : Lec5_C_Functions_Lab_1.c
 Author      : Thomas Medhat
 Description : Factorial Function
 ============================================================================
 */

#include <stdio.h>

unsigned long CalFact(unsigned char a);

int main(void) {
	unsigned int number = 0;
	printf("Enter Number to calculate factorial for : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&number);
	printf("factorial of %d is %ld\n",number,CalFact(number));
	return 0;
}

unsigned long CalFact(unsigned char a){
	unsigned long fact = 1;

	for ( ; a > 0 ; a--){
		fact = fact*a;
	}
	return fact;
}
