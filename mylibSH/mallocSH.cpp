#include "mallocSH.h"

int main(void) {
	int num1 = 20;
	int* numPtr1;

	numPtr1 = &num1;

	int* numPtr2;
	//numPtr2 = (int*)malloc(sizeof(int));

	numPtr2 = (decltype(numPtr2))malloc(sizeof(int));
	
	printf("static alloc  : %p -> @ stack\n", numPtr1);
	
	printf("dynamic alloc : %p -> @ heap\n", numPtr2);
	free(numPtr2); // memory leakage **
	return 0;
}