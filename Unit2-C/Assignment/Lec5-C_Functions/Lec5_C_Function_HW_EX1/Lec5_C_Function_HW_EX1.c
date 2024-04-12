/*
 ============================================================================
 Name        : Lec5_C_Function_HW_EX1.c
 Author      : Thomas Medhat
 Description : Prime Numbers between intervals
 ============================================================================
 */

#include <stdio.h>


void getprimeNumbers(unsigned int a,unsigned int b);

int main(void) {
	unsigned int number1 = 0, number2 = 0 ;
	printf("Enter Number1 : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&number1);
	printf("Enter Number2 : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&number2);
	getprimeNumbers(number1,number2);
	return 0;
}

void getprimeNumbers(unsigned int a,unsigned int b){
	unsigned int i = 0,j = 0,primeExist = 0;
	if(a > b){
		a = a + b;
		b = a - b;
		a = a - b;
	}
	else if(a == b) {
		printf("Wrong Entry\n");
		return;
	}
	printf("Prime Numbers between %d and %d are : ",a,b);
	for(i = a ; i <= b ; i++){
		if(i == 0 ||i == 1)
			continue;
		for(j = 2 ; j <= 9 ; j++){
			if (j == i ){
				continue;
			}
			if (i%j == 0){
				break;
			}
		}
		if(j == 10){
			printf("%d  ",i);
			primeExist = 1;
		}
	}
	if (primeExist == 0){
		printf("Does not exist");
	}
	printf("\n");
}
