#include <stdio.h>

int main() {
    int n, i, numerator = 3, denominator = 4;
    float sum = 1;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for (i = 2; i <= n; i++) {
        sum = sum + (float)numerator / denominator;
        numerator = numerator + 2;
        denominator = denominator + 2;
    }

    printf("Sum = %.2f", sum);

    return 0;
}