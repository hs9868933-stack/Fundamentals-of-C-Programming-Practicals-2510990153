#include <stdio.h>

int main() {

    char ch;
    int num;

    // ---- Vowel or Consonant ----
    printf("Enter an alphabet: ");
    scanf("%c", &ch);

    switch(ch) {
        case 'a': case 'e': case 'i': case 'o': case 'u':
        case 'A': case 'E': case 'I': case 'O': case 'U':             //2510990027
            printf("It is a Vowel\n");
            break;

        default:
            printf("It is a Consonant\n");
    }

    // ---- Positive, Negative or Zero ----
    printf("\nEnter a number: ");
    scanf("%d", &num);

    switch(num > 0) {

        case 1:
            printf("Number is Positive");
            break;

        case 0:
            switch(num < 0) {
                case 1:
                    printf("Number is Negative");
                    break;

                case 0:
                    printf("Number is Zero");
            }
    }

    return 0;

}
