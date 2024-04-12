/*
 ============================================================================
 Name        : Lec5_C_Function_HW_EX3.c
 Author      : Thomas Medhat
 Description : Reverse sentence using Recursion
 ============================================================================
 */

#include <stdio.h>
#include <string.h>


/*void reverseSentence(unsigned char sentence[] , unsigned int length);*/
void reverseSentenceRecursion(unsigned char sentence[] , unsigned int length);

int main(void) {
	unsigned char sentence[30] = {0};
	printf("Enter Sentence to be reversed : ");
	fflush(stdin);fflush(stdout);
	gets(sentence);
	printf("Sentence before reverse : %s\n",sentence);
	/*reverseSentence(sentence,30);
	printf("Sentence after reverse normal : %s\n",sentence);
	reverseSentence(sentence,30);
	printf("Sentence after another reverse normal : %s\n",sentence);*/
	reverseSentenceRecursion(sentence,30);
	printf("Sentence after reverse recursion : %s\n",sentence);
	return 0;
}
/*
void reverseSentence(unsigned char sentence[] , unsigned int length){
	unsigned char i = 0,temp = 0 ;
	while (i != strlen(sentence)/2){
		temp = sentence[strlen(sentence)-i-1];
		sentence[strlen(sentence)-i-1] = sentence[i];
		sentence[i] = temp;
		i++;
	}
}
*/

void reverseSentenceRecursion(unsigned char sentence[] , unsigned int length){
	static unsigned char i = 0;
	unsigned char temp = 0;
	temp = sentence[strlen(sentence)-i-1];
	sentence[strlen(sentence)-i-1] = sentence[i];
	sentence[i] = temp;
	i++;
	if(i != strlen(sentence)/2){
		reverseSentenceRecursion(sentence,length);
	}
}
