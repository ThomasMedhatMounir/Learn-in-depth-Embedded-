/*
 ============================================================================
 Name        : Lec5_C_Functions_Lab_4.c
 Author      : Thomas Medhat
 Description : pass by value vs pass by refrence
 ============================================================================
 */

#include <stdio.h>


void tryToModify(unsigned char x,unsigned char text[]);

int main(void) {
	unsigned char  v = 5;
	unsigned char  name[5] = "Good";
	printf("V = %d and name = %s\n",v,name);
	tryToModify(v,name);
	printf("V = %d and name = %s\n",v,name);
	return 0;
}

void tryToModify(unsigned char x,unsigned char text[]){
	x++;
	text[0]--;
}
