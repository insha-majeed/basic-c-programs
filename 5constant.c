// Define and use a constant (e.g. PI as 3.14159) in a program

#include <stdio.h>

#define PI 3.14159

int main() {
    float radius, area;
    printf("Enter the radius of a circle: ");
    scanf("%f", &radius);
    area = PI * radius * radius;
    printf("The area of the circle with radius %.2f is %.2f\n", radius, area);
    return 0;
}