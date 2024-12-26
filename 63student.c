// Store details (Roll No. and Marks) of all the students of your class in an array of structure and then find the topper of the class

#include <stdio.h>

struct Student {
    int roll;
    float marks;
};

int main() {
    struct Student s[5];
    printf("Enter information:\n");
    for (int i = 0; i < 5; i++) {
        printf("Enter roll number: ");
        scanf("%d", &s[i].roll);
        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
    }
    int topper = 0;
    for (int i = 1; i < 5; i++) {
        if (s[i].marks > s[topper].marks) {
            topper = i;
        }
    }
    printf("Topper of the class is:\n");
    printf("Roll: %d\n", s[topper].roll);
    printf("Marks: %.2f\n", s[topper].marks);
    return 0;
}