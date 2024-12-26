// Store details of all the students of your class in an array of structure and then display the same in a tabular format

#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student s[5];
    printf("Enter information:\n");
    for (int i = 0; i < 5; i++) {
        printf("Enter name: ");
        scanf("%s", s[i].name);
        printf("Enter roll number: ");
        scanf("%d", &s[i].roll);
        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
    }
    printf("Displaying Information:\n");
    printf("Name\tRoll\tMarks\n");
    for (int i = 0; i < 5; i++) {
        printf("%s\t%d\t%.2f\n", s[i].name, s[i].roll, s[i].marks);
    }
    return 0;
}