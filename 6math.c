// Use math library (pow(), sqrt(), etc.)

#include <stdio.h>
#include <math.h>

int main() {
    float num = 16.0, base = 2.0, exponent = 4.0;
    printf("Square root of %.2f is %.2f\n", num, sqrt(num));
    printf("%.2f raised to the power of %.2f is %.2f\n", base, exponent, pow(base, exponent));
    return 0;
}
    


