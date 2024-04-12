/*
 ============================================================================
 Name        : Lec5_C_Functions_Lab_5.c
 Author      : Thomas Medhat
 Description : number triangle
 ============================================================================
 */

#include <stdio.h>


void creatNumTrig(unsigned int x);

int main(void) {
	unsigned int number = 0 ;
	printf("Enter Number : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&number);
	creatNumTrig(number);
	return 0;
}

void creatNumTrig(unsigned int x){
	unsigned int i = 0,j=0;
	for(i = 0 ; i <= x ; i++){
		for(j = i ; j <= x ; j++){
			printf("%d  ",j);
		}
		printf("\n");
	}
}
