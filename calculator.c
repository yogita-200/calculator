#include <stdio.h>

int main() {
    float num1, num2, result;
    char op;

    // Input operator
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &op);  // space before %c clears input buffer

    // Input two numbers
    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter second number: ");
    scanf("%f", &num2);

    // Perform calculation
    if (op == '+') {
        result = num1 + num2;
        printf("Result: %.2f\n", result);
    } else if (op == '-') {
        result = num1 - num2;
        printf("Result: %.2f\n", result);
    } else if (op == '*') {
        result = num1 * num2;
        printf("Result: %.2f\n", result);
    } else if (op == '/') {
        if (num2 != 0) {
            result = num1 / num2;
            printf("Result: %.2f\n", result);
        } else {
            printf("Error: Cannot divide by zero!\n");
        }
    } else {
        printf("Invalid operator!\n");
    }

    return 0;
}
