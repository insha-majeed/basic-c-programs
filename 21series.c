// Display the series: 2 4 8 16 32 64 128 ....... (n terms)

#include <stdio.h>

int main() {
    int n, i, term = 2;
    printf("Enter n: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        printf("%d ", term);
        term *= 2;
    }
    printf("\n");
    return 0;
}