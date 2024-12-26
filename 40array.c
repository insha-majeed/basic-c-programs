// Display contents of a character array

#include <stdio.h>

int main() {
    char arr[5] = {'a', 'b', 'c', 'd', 'e'};
    int i;
    for (i = 0; i < 5; i++) {
        printf("%c ", arr[i]);
    }
    printf("\n");
    return 0;
}