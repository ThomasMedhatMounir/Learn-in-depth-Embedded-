/*
 ============================================================================
 Name        : Lec5_C_Functions_Lab_2.c
 Author      : Thomas Medhat
 Description : Minimum of array
 ============================================================================
 */

#include <stdio.h>

unsigned int getMin(unsigned int arr[],unsigned int size);

int main(void) {
	unsigned int  i = 0,min = 0;
	unsigned int arr[7] = {0};
	for (i = 0; i < 7; i++) {
		printf("Enter Element %d : ",i);
		fflush(stdin);
		fflush(stdout);
		scanf("%d",&arr[i]);
	}
	min = getMin(arr,7);
	printf("Minimum value is %d\n",min);
	return 0;
}

unsigned int getMin(unsigned int arr[],unsigned int size){
	unsigned int i = 0 , min = arr[0];
	for (i = 0; i < size; i++) {
		if(arr[i] < min){
			min = arr[i];
		}
	}
	return min;
}
