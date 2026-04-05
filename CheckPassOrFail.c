#include <stdio.h>

/**
 * Main function to check if a student passed or failed.
 */
int main() {
    int marks;

    printf("Enter student marks: ");
    if (scanf("%d", &marks) != 1) return 1;

    if (marks >= 40) {
        printf("Pass\n");
    } else {
        printf("Fail\n");
    }

    return 0;
}
