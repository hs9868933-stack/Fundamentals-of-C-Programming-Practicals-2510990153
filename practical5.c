#include <stdio.h>

int main() {
    float a, b;

    printf("Enter 2 numbers space separated: ");        //2510990153
    scanf("%f %f", &a, &b);

    printf("Addition: %.2f + %.2f = %.2f\n", a, b, a + b);
    printf("Subtraction: %.2f - %.2f = %.2f\n", a, b, a - b);
    printf("Multiplication: %.2f * %.2f = %.2f\n", a, b, a * b);

    if (b != 0)
        printf("Division: %.2f / %.2f = %.2f\n", a, b, a / b);
    else
        printf("Division by zero is not allowed.\n");

    return 0;

}

