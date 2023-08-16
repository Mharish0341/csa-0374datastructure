#include<stdio.h>
unsigned factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n*factorial(n - 1);
    }
}

int main() {
    int n;

    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        unsigned result = factorial(n);
        printf("%d = %u\n", n, result);
}
}