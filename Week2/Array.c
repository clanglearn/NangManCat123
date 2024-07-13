#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int arr[5];
	int min, max;
	for (int i = 0; i < 5; i++) {
		scanf("%d", &arr[i]);
		if (i == 0) {
			min = arr[i];
			max = arr[i];
		}
		else {
			if (min > arr[i]) min = arr[i];
			if (max < arr[i]) max = arr[i];
		}
	}
	printf("min : %d\nmax : %d", min, max);
    return 0;
}