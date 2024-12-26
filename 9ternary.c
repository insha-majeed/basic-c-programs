// Use ternary operator

#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int result = (num % 2 == 0);
    printf("%d is %s\n", num, result ? "even" : "odd");
    return 0;
}