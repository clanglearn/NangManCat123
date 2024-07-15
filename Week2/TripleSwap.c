#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void TripleSwap(int* a, int* b, int* c);
int main(void) {
	int a = 10, b = 20, c = 30;
	TripleSwap(&a, &b, &c);
	printf("%d %d %d\n", a, b, c);
	return 0;
}
void TripleSwap(int* a, int* b, int* c) {
	int temp = *a;
	*a = *b;
	*b = *c;
	*c = temp;
}