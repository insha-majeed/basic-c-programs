// Display the series: 2 4 16 256 65536 ....... (n terms)

#include <stdio.h>

int main() {
    int n, i, term = 2;
    printf("Enter n: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        printf("%d ", term);
        term *= term;
    }
    printf("\n");
    return 0;
}