#include <stdio.h>

/**
 * Main function to check if a number is within the valid range [1, 100].
 */
int main() {
    int num;

    printf("Enter a number: ");
    if (scanf("%d", &num) != 1) return 1;

    if (num >= 1 && num <= 100) {
        printf("Valid\n");
    } else {
        printf("Invalid\n");
    }

    return 0;
}
