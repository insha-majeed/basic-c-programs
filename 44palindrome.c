// Check whether a string is palindrome or not

#include <stdio.h>

int main() {
    char str[100];
    int i, j, len, flag = 1;
    printf("Enter a string: ");
    scanf("%s", str);
    for (len = 0; str[len] != '\0'; len++);
    for (i = 0, j = len - 1; i < j; i++, j--) {
        if (str[i] != str[j]) {
            flag = 0;
            break;
        }
    }
    if (flag) {
        printf("The string is a palindrome\n");
    } else {
        printf("The string is not a palindrome\n");
    }
    return 0;
}