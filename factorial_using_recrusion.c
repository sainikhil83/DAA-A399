#include <stdio.h>
long long int factorial(int n);

int main() {
    int n;
    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        long long int result = factorial(n);
        printf("Factorial of %d is %lld\n", n, result);
    }

    return 0;
}
long long int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}
/*
OUPUT
Enter a non-negative integer: 5
Factorial of 5 is 120*/