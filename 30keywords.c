// Demonstrate the use of continue and break keywords (in loops)

#include <stdio.h>

int main() {
    int num, i;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Factors of %d are: ", num);
    for (i = 1; i <= num; i++) {
        if (num % i != 0) {
            continue;
        }
        printf("%d ", i);
        if (i == num / 2) {
            break;
        }
    }
    printf("\n");
    return 0;
}