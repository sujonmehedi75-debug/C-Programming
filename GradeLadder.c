#include <stdio.h>

/**
 * Main function to determine the grade based on marks using an if-else ladder.
 */
int main() {
    int marks;

    printf("Enter student marks: ");
    if (scanf("%d", &marks) != 1) return 1;

    if (marks >= 80) {
        printf("Grade: A\n");
    } else if (marks >= 70) {
        printf("Grade: B\n");
    } else if (marks >= 60) {
        printf("Grade: C\n");
    } else {
        printf("Result: Fail\n");
    }

    return 0;
}
