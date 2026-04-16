#include <stdio.h>

int main() {
    int n, num1 = 0, num2 = 1, nextNum;
    printf("Enter the number of Fibonacci numbers to generate: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for (int i = 1; i <= n; ++i) {
        printf("%d", num1);
        nextNum = num1 + num2;
        num1 = num2;
        num2 = nextNum;
        if (i < n) {
            printf(", ");
        }
    }

    printf("\n"); // Print a newline at the end
    return 0;
}
/*
OUTPUT
Enter the number of Fibonacci numbers to generate: 15
Fibonacci Series: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377*/