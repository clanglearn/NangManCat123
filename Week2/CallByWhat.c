#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int SquareV(int num);
int SquareR(int* num);
int main(void){
	int num = 4;
	printf("value: %d\n", SquareV(num));
	SquareR(&num);
	printf("reference: %d\n", num);
	return 0;
}
int SquareV(int num) {
	return num * num;
}
int SquareR(int* num) {
	*num = *num * *num;
}