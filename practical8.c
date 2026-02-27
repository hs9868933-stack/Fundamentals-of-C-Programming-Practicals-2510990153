#include <stdio.h>

int main() {
    int a, b, c;
    int greatest;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a >= b && a >= c) {
        printf("\nUsing If-Else:\n");       //2510990153
        printf("Greatest number is: %d\n", a);
    }
    else if (b >= a && b >= c) {
        printf("\nUsing If-Else:\n");
        printf("Greatest number is: %d\n", b);
    }
    else {
        printf("\nUsing If-Else:\n");
        printf("Greatest number is: %d\n", c);
    }

    greatest = (a >= b && a >= c) ? a :
               (b >= a && b >= c) ? b : c;

    printf("\nUsing Conditional (Ternary) Operator:\n");
    printf("Greatest number is: %d\n", greatest);

    return 0;

}

