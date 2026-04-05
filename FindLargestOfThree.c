#include <stdio.h>

/**
 * Main function to find the largest among three numbers.
 */
int main() {
    int a, b, c, largest;

    printf("Enter three numbers: ");
    if (scanf("%d %d %d", &a, &b, &c) != 3) return 1;

    if (a > b) {
        if (a > c) {
            largest = a;
        } else {
            largest = c;
        }
    } else {
        if (b > c) {
            largest = b;
        } else {
            largest = c;
        }
    }

    printf("Largest number is %d\n", largest);
    return 0;
}
