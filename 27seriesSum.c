// Find sum of series: 1 + 1/2 + 1/4 + 1/6 + ….+ 1/n

#include <stdio.h>

int main() {
    int n, i;
    float sum = 0.0;
    printf("Enter n: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        sum += 1.0 / (2 * i);
    }
    printf("Sum of series: %.2f\n", sum);
    return 0;
}