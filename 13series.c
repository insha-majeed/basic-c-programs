// Display the series (using loops): 1 2 3 4 5 .... n

#include <stdio.h>

int main() {
    int n, i;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}