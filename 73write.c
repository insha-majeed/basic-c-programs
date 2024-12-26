// Write into a text file

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fptr;
    char filename[100], c;
    printf("Enter the filename to open for writing: ");
    scanf("%s", filename);
    fptr = fopen(filename, "w");
    if (fptr == NULL) {
        printf("Cannot open file %s\n", filename);
        exit(0);
    }
    printf("Enter contents to write into the file: ");
    while ((c = getchar()) != EOF) {
        fputc(c, fptr);
    }
    fclose(fptr);
    printf("Contents written to %s\n", filename);
    return 0;
}