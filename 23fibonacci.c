// Display the Fibonacci series: 0 1 1 2 3 5 8 13 21 ....... (n terms)

#include <stdio.h>

int main() {
    int n, i, t1 = 0, t2 = 1, nextTerm;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Fibonacci series: ");
    for (i = 1; i <= n; i++) {
        printf("%d ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    printf("\n");
    return 0;
}