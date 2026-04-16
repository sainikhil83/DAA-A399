#include <stdio.h>
#include <math.h>

float f(float x) {
    return x*x*x - x - 1;
}

float df(float x) {
    return 3*x*x - 1;
}

int main() {
    float x0, x1;
    int i, n;

    printf("Enter initial guess: ");
    scanf("%f", &x0);

    printf("Enter number of iterations: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        x1 = x0 - (f(x0) / df(x0));
        x0 = x1;
    }

    printf("Approximate root = %f\n", x1);

    return 0;
}
/*Enter initial guess: 2
Enter number of iterations: 5
Approximate root = 1.324718*/