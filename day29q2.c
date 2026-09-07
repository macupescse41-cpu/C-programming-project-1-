#include <stdio.h>

int main() {
    int arr[100], n, i, maximum, minimum;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    maximum = arr[0];
    minimum = arr[0];

    for (i = 1; i < n; i++) {
        if (arr[i] > maximum) {
            maximum = arr[i];
        }

        if (arr[i] < minimum) {
            minimum = arr[i];
        }
    }

    printf("Maximum element = %d\n", maximum);
    printf("Minimum element = %d", minimum);

    return 0;
}