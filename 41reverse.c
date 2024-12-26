// Input a string from the user and display the same

#include <stdio.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    printf("The string is: %s\n", str);
    return 0;
}