// Use if-else with relational and logical operators (grading according to percentage of a student)

#include <stdio.h>

int main() {
    float percentage;
    printf("Enter percentage: ");
    scanf("%f", &percentage);
    if (percentage >= 90) {
        printf("Grade A\n");
    } else if (percentage >= 80) {
        printf("Grade B\n");
    } else if (percentage >= 70) {
        printf("Grade C\n");
    } else if (percentage >= 60) {
        printf("Grade D\n");
    } else if (percentage >= 40) {
        printf("Grade E\n");
    } else {
        printf("Grade F\n");
    }
    return 0;
}