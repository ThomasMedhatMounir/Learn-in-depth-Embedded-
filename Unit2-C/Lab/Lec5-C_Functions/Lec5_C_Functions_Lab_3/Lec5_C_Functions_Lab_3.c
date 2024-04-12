/*
 ============================================================================
 Name        : Lec5_C_Functions_Lab_3.c
 Author      : Thomas Medhat
 Description : Find Name index
 ============================================================================
 */

#include <stdio.h>
#include <string.h>

unsigned char getName(unsigned char str[][10],unsigned char size,unsigned char name[]);

int main(void) {
	unsigned char  i = 0, nameIdx = 0;
	unsigned char str[3][10] = {0};
	unsigned char targetName[10] = {0};
	for (i = 0; i < 3; i++) {
		printf("Enter Name %d : ",i);
		fflush(stdin);fflush(stdout);
		gets(str[i]);
	}

	printf("Enter Target Name : ");
	fflush(stdin);fflush(stdout);
	gets(targetName);
	nameIdx = getName(str,3,targetName);
	if (nameIdx != (unsigned char)~0){
		printf("Name is found in index %d\n",nameIdx);
	}
	else{
		printf("Name not found\n");
	}
	return 0;
}

unsigned char getName(unsigned char str[][10],unsigned char size,unsigned char name[]){
	unsigned char i = 0 , nameIdx = ~0;
	for (i = 0; i < size; i++) {
		if(strcmp(name,str[i]) == 0){
			nameIdx = i;
			break;
		}
	}
	return nameIdx;
}
