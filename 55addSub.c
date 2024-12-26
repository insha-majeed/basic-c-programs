// Add and subtract two integers using functions (a+b, a-b, b-a)

#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int main() {
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    printf("Sum: %d\n", add(x, y));
    printf("Difference: %d\n", subtract(x, y));
    printf("Difference: %d\n", subtract(y, x));
    return 0;
}