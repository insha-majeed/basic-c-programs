// Display contents of a string in reverse order using pointers

#include <stdio.h>
#include <string.h>

int main() {
    char str[100], *p;
    int i, len;
    printf("Enter a string: ");
    scanf("%s", str);
    len = strlen(str);
    p = str + len - 1;
    printf("The string in reverse order is: ");
    for (i = 0; i < len; i++) {
        printf("%c", *p);
        p--;
    }
    printf("\n");
    return 0;
}