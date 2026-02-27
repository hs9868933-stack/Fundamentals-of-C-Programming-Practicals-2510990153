#include <stdio.h>

int main() {

    int n, i = 1;   
    printf("Enter Number: ");
    scanf("%d", &n);

    int sum = 0;    // 2510990027

    while (i <= n) {
        sum += i;
        i++;
    }

    printf("The sum of first %d numbers is %d", n, sum);

    return 0;

}
