#include <stdio.h>

/**
 * Main function to determine the grade based on marks using a switch statement.
 */
int main() {
    int marks, grade_category;

    printf("Enter student marks: ");
    if (scanf("%d", &marks) != 1) return 1;

    grade_category = marks / 10;

    switch (grade_category) {
        case 10:
        case 9:
        case 8:
            printf("Grade: A\n");
            break;
        case 7:
            printf("Grade: B\n");
            break;
        case 6:
            printf("Grade: C\n");
            break;
        default:
            printf("Result: Fail\n");
    }

    return 0;
}
