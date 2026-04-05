#include <stdio.h>

/**
 * Main function to check if a number is even and divisible by 5.
 */
int main() {
    int num;
    printf("Enter a number: ");
    if (scanf("%d", &num) != 1) return 1;

    if (num % 2 == 0 && num % 5 == 0) {
        printf("This is a special Number\n");
    } else {
        printf("Normal Number\n");
    }

    return 0;
}
