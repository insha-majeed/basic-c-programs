// Input a string from the user and display it in reverse order

#include <stdio.h>

int main() {
    char str[100];
    int i;
    printf("Enter a string: ");
    scanf("%s", str);
    for (i = 0; str[i] != '\0'; i++);
    printf("The string in reverse order is: ");
    for (i--; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");
    return 0;
}