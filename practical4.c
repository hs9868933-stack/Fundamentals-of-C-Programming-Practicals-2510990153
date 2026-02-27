#include <stdio.h>

int main() {
    int r;
    const float pi = 3.14;

    printf("Enter the radius: ");
    scanf("%d",&r);

    float area = pi * r * r;
    float circumference = 2 * pi * r;       //2510990153

    printf("Area: %.2f\n",area);
    printf("Circumference: %.2f",circumference);
    return 0;

}

