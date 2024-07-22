#include <stdio.h>
#include <stdlib.h>
int add(int num1, int num2);
int sub(int num1, int num2);
int mul(int num1, int num2);
int divide(int num1, int num2);
int main(void) {
	int (*fp[4])(int, int) = { add,sub,mul,divide };
	int k;
	scanf("%d", &k);
	for (int i = 0; i < k; i++) {
		int cmd, num1, num2;
		scanf("%d %d %d", &cmd, &num1, &num2);
		printf("%d\n", fp[cmd](num1, num2));
	}
	return 0;
}
int add(int num1, int num2) {
	return num1 + num2;
}
int sub(int num1, int num2) {
	return num1 - num2;
}
int mul(int num1, int num2) {
	return num1 * num2;
}
int divide(int num1, int num2) {
	if (num1 >= num2) return num1 / num2;
	else return num2 / num1;
}