#include <stdio.h>
int Factorial(int n);

int main(void) {
    int n;
    scanf_s("%d", &n);
    printf("%d\n", Factorial(n));
    return 0;
}
int Factorial(int n) {
    if (n == 0) return 1;
    else if (n == 1) return 1;
    else return n * Factorial(n - 1);
}