// Find the number of characters, words, sentences, vowels, consonants, punctuation marks, etc. in a text file

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    FILE *fptr;
    char filename[100], c;
    int characters = 0, words = 0, sentences = 0, vowels = 0, consonants = 0, punctuation = 0;
    printf("Enter the filename to open for reading: ");
    scanf("%s", filename);
    fptr = fopen(filename, "r");
    if (fptr == NULL) {
        printf("Cannot open file %s\n", filename);
        exit(0);
    }
    c = fgetc(fptr);
    while (c != EOF) {
        characters++;
        if (c == ' ' || c == '\n' || c == '\t') {
            words++;
        }
        if (c == '.' || c == '?' || c == '!') {
            sentences++;
        }
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            vowels++;
        }
        if (isalpha(c)) {
            consonants++;
        }
        if (c == '.' || c == ',' || c == ';' || c == ':' || c == '!' || c == '?' || c == '-' || c == '\'' || c == '\"') {
            punctuation++;
        }
        c = fgetc(fptr);
    }
    fclose(fptr);
    printf("Number of characters: %d\n", characters);
    printf("Number of words: %d\n", words + 1);
    printf("Number of sentences: %d\n", sentences);
    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);
    printf("Number of punctuation marks: %d\n", punctuation);
    return 0;
}