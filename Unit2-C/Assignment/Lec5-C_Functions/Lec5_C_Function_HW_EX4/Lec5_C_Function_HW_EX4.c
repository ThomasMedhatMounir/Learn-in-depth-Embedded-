/*
 ============================================================================
 Name        : Lec5_C_Function_HW_EX4.c
 Author      : Thomas Medhat
 Description : Power using Recursion
 ============================================================================
 */

#include <stdio.h>

unsigned long getNumPower(unsigned int BaseNum , unsigned int powerNum);

int main(void) {
	unsigned int BaseNum = 0 , powerNum = 0 ;
	unsigned long NumPower = 0;
	printf("Enter Base Number : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&BaseNum);
	printf("Enter Power Number : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&powerNum);
	NumPower = getNumPower(BaseNum,powerNum);
	printf("%d ^ %d = %ld\n",BaseNum,powerNum,NumPower);
	return 0;
}

unsigned long getNumPower(unsigned int BaseNum , unsigned int powerNum){
	if(powerNum != 0){
		return BaseNum * getNumPower(BaseNum,powerNum-1);
	}
	else{
		return 1;
	}


}
