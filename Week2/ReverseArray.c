#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void reversearray(int* ptr,int len);
void swap(int* ptr1, int* ptr2);
int main(void) {
	int arr[6] = { 1,2,3,4,5,6,};
	reversearray(arr,sizeof(arr)/4);
	for (int i = 0; i < 6; i++) printf("%d", arr[i]);
    return 0;
}
void reversearray(int*ptr,int len) {
	for (int i = 0; i<len/2; i++){
		swap(ptr+i, ptr+(len-i-1));
	}
}
void swap(int* ptr1, int* ptr2) {
	int temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;
}