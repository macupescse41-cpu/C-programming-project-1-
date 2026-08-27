#include <stdio.h>

int main() {
    int n, original, temp;
    int digits = 0, sum = 0, digit, power;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;
    temp = n;

    if (n == 0) {
        digits = 1;
    } else {
        while (temp != 0) {
            digits++;
            temp = temp / 10;
        }
    }

    temp = n;

    while (temp != 0) {
        digit = temp % 10;
        power = 1;

        for (int i = 1; i <= digits; i++) {
            power = power * digit;
        }

        sum = sum + power;
        temp = temp / 10;
    }

    if (sum == original)
        printf("Armstrong Number\n");
    else
        printf("Not Armstrong Number\n");

    return 0;
}