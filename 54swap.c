// Swap two numbers using functions (call-by-value method)

#include <stdio.h>

void swap(int a, int b) {
    int temp;
    printf("Before swapping: a = %d, b = %d\n", a, b);
    temp = a;
    a = b;
    b = temp;
    printf("After swapping: a = %d, b = %d\n", a, b);
}

int main() {
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    swap(x, y);
    return 0;
}