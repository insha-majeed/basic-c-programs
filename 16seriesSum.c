// Find sum of series: 1 2 3 4 5 .... n

#include <stdio.h>

int main() {
    int n, i, sum = 0;
    printf("Enter n: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        sum += i;
    }
    printf("Sum of series 1 to %d is %d\n", n, sum);
    return 0;
}