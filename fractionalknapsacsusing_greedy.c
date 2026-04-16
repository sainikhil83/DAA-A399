#include <stdio.h>

struct Item {
    int weight;
    int value;
    float ratio;
};

void sort(struct Item items[], int n) {
    int i, j;
    struct Item temp;

    for(i = 0; i < n - 1; i++) {
        for(j = i + 1; j < n; j++) {
            if(items[i].ratio < items[j].ratio) {
                temp = items[i];
                items[i] = items[j];
                items[j] = temp;
            }
        }
    }
}

int main() {
    int n, i;
    float capacity, totalValue = 0;

    printf("Enter number of items: ");
    scanf("%d", &n);

    struct Item items[n];

    for(i = 0; i < n; i++) {
        printf("Enter value and weight of item %d: ", i+1);
        scanf("%d %d", &items[i].value, &items[i].weight);
        items[i].ratio = (float)items[i].value / items[i].weight;
    }

    printf("Enter capacity of knapsack: ");
    scanf("%f", &capacity);

    sort(items, n);

    for(i = 0; i < n; i++) {
        if(capacity >= items[i].weight) {
            capacity -= items[i].weight;
            totalValue += items[i].value;
        } else {
            totalValue += items[i].ratio * capacity;
            break;
        }
    }

    printf("Maximum value in knapsack = %.2f\n", totalValue);

    return 0;
}
/*Enter number of items: 2
Enter value and weight of item 1: 20 30
Enter value and weight of item 2: 10 50
Enter capacity of knapsack: 5
Maximum value in knapsack = 3.33*/