#include <stdio.h>

/**
 * Main function to find the largest of two numbers.
 */
int main() {
    int a, b;
    printf("Enter two numbers (space separated): ");
    if (scanf("%d %d", &a, &b) != 2) return 1;

    if (a > b) {
        printf("Largest is %d\n", a);
    } else {
        printf("Largest is %d\n", b);
    }

    return 0;
}
