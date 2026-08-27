#include <stdio.h>

int main() {
    int n, sum = 0, odd = 1;
    printf("enter your number:");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum = sum + odd;
        odd = odd + 2;
    }

    printf("%d", sum);

    return 0;
}