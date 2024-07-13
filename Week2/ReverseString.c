#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	char str[100];
	scanf("%s", str);
	int len=0;
	do len++;
	while (str[len] != NULL);
	for (int i = 0; i < len / 2;i++) {
		char temp = str[i];
		str[i] = str[len - i - 1];
		str[len - i - 1] = temp;
	}
	printf("%s", str);
    return 0;
}