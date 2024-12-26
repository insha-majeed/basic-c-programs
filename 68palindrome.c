// Check if a string is palindrome or not using pointers

#include <stdio.h>
#include <string.h>

int main() {
    char str[100], *p;
    int i, len, flag = 0;
    printf("Enter a string: ");
    scanf("%s", str);
    len = strlen(str);
    p = str + len - 1;
    for (i = 0; i < len / 2; i++) {
        if (*p != str[i]) {
            flag = 1;
            break;
        }
        p--;
    }
    if (flag) {
        printf("The string is not a palindrome\n");
    } else {
        printf("The string is a palindrome\n");
    }
    return 0;
}