#include <stdio.h>

int main() {
    int n, i, numerator = 2, denominator = 3;
    float sum = 0;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum = sum + (float)numerator / denominator;

        numerator = numerator + 2;
        denominator = denominator + 4;
    }

    printf("Sum = %.2f", sum);

    return 0;
}