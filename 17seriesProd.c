// Find product of series: 1 2 3 4 5 .... n

#include <stdio.h>

int main() {
    int n, i;
    long long int product = 1;
    printf("Enter n: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        product *= i;
    }
    printf("Product of series 1 to %d is %lld\n", n, product);
    return 0;
}