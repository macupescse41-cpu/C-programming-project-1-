#include <stdio.h>

int main() {
    float a, b;
    char op;

    scanf("%f %c %f", &a, &op, &b);

    switch (op) {
        case '+':
            printf("%.2f", a + b);
            break;
        case '-':
            printf("%.2f", a - b);
            break;
        case '*':
            printf("%.2f", a * b);
            break;
        case '/':
            if (b != 0)
                printf("%.2f", a / b);
            else
                printf("Division by zero is not allowed");
            break;
        case '%':
            printf("Modulo works with integers only");
            break;
        default:
            printf("Invalid operator");
    }

    return 0;
}