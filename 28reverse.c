// Display the digits of any natural number in reverse order [Use while loop]

#include <stdio.h>

int main() {
    int num, digit;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Digits in reverse order: ");
    while (num > 0) {
        digit = num % 10;
        printf("%d ", digit);
        num /= 10;
    }
    printf("\n");
    return 0;
}