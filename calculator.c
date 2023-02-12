#include <stdio.h>

int main() {
    double num1, num2;
    char operator;

    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);

    switch (operator) {
        case '+':
            printf("%.1lf + %.1lf = %.1lf", num1, num2, num1 + num2);
            break;
        case '-':
            printf("%.1lf - %.1lf = %.1lf", num1, num2, num1 - num2);
            break;
        case '*':
            printf("%.1lf * %.1lf = %.1lf", num1, num2, num1 * num2);
            break;
        case '/':
            if (num2 == 0) {
                printf("Error: Cannot divide by zero.");
            } else {
                printf("%.1lf / %.1lf = %.1lf", num1, num2, num1 / num2);
            }
            break;
        default:
            printf("Error: Invalid operator.");
    }

    return 0;
}