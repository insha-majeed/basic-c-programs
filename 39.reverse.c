// Display contents of an integer array in reverse order

#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int i;
    printf("The elements before reversing are: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("The elements after reversing are: ");
    for (i = 4; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}