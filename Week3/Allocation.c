#include <stdio.h>
#include <stdlib.h>
int main(void) {
	int num, dist;
	int* array;
	scanf("%d", &num);
	array = calloc(num, sizeof(int));
	for (int i = 0; i < num; i++) {
		scanf("%d", &array[i]);
	}
	scanf("%d", &dist);
	array = (int*)realloc(array, (num + dist) * sizeof(int));
	for (int i = num; i < num + dist; i++) {
		scanf("%d", &array[i]);
	}
	for (int i = 0; i < num + dist; i++) {
		printf("%d ", array[i]);
	}
    free(array);
	return 0;
}