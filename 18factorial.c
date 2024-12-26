// Find factorial of a number entered by the user

#include <stdio.h>

int main() {
    int n, i;
    long long int factorial = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        factorial *= i;
    }
    printf("Factorial of %d is %lld\n", n, factorial);
    return 0;
}