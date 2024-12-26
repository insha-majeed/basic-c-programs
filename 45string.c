// Demonstrate the use of string library functions: strlen(), strcpy(), strcat(), strcmp() using examples

#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];

    printf("Enter a string (str1): ");
    scanf("%s", str1);
    printf("Enter another string (str2): ");
    scanf("%s", str2);

    printf("Length of str1: %ld\n", strlen(str1));
    printf("Length of str2: %ld\n", strlen(str2));

    char str3[100];
    printf("Enter a string (str3): ");
    scanf("%s", str3);
    strcpy(str3, str1);
    printf("str3 after copying str1: %s\n", str3);

    strcat(str1, str2);
    printf("str1 after concatenation: %s\n", str1);
    printf("str2 after concatenation: %s\n", str2);

    int cmp = strcmp(str1, str2);
    if (cmp == 0) {
        printf("str1 and str2 are equal\n");
    } else if (cmp < 0) {
        printf("str1 is less than str2\n");
    } else {
        printf("str1 is greater than str2\n");
    }

    return 0;
}

