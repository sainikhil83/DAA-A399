#include <stdio.h>

void binPacking(int *a, int size, int n) {
    int binCount = 1, i;
    int s = size; 

    for (i = 0; i < n; i++) {
        if (s - *(a + i) > 0) {
            s -= *(a + i);
            continue;
        } else {
            binCount++;
            s = size;
            i--;      
        }
    }
    printf("Number of bins required: %d", binCount);
}
int main(int argc, char **argv) {
    printf("Enter the number of items in Set: ");
    int n;
    scanf("%d", &n);

    printf("Enter %d items: ", n);
    int a[n], i;
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter the bin size: ");
    int size;
    scanf("%d", &size);

    binPacking(a, size, n);

    return 0;
}
/*
OUTPUT
Enter the number of items in Set: 3
Enter 3 items: 1 2 3
Enter the bin size: 5
Number of bins required: 2*/