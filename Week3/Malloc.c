#include <stdio.h>
#include <stdlib.h>
int main(void) {
	int size;
	scanf("%d", &size);
	int* array;
	array = (int*)malloc(size * sizeof(int));
	for (int i = 0; i < size; i++) {
		scanf("%d", &array[i]);
	}
	for (int i = 0; i < size; i++) {
		printf("%d ", array[i]);
	}
    free(array);
	return 0;
}