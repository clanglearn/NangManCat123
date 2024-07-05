#include <stdio.h>
int main(void){
	int n;
	char message;
	scanf_s("%d", &n);
	(n > 90) ? (message = 'A') : ((n > 80) ? (message = 'B') : (message = 'F'));
	printf("%c", message);
	return 0;
}