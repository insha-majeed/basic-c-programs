// Demonstrate use of pointers in programming

#include <stdio.h>

int main() {
    int num = 10;
    int *p;
    p = &num;
    printf("Address of num: %p\n", &num);
    printf("Value of num: %d\n", num);
    printf("Value of num using pointer: %d\n", *p);
    printf("Address of pointer p: %p\n", &p);
    printf("Value of pointer p: %p\n", p);
    return 0;
}