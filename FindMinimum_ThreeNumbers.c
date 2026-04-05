#include <stdio.h>

/**
 * Compares three numbers to find the minimum.
 */
int main() {
    int a, b, c;

    printf("Enter three numbers for minimum: ");
    if (scanf("%d %d %d", &a, &b, &c) != 3) return 1;

    if (a <= b && a <= c) {
        printf("Minimum number is %d\n", a);
    } else if (b <= a && b <= c) {
        printf("Minimum number is %d\n", b);
    } else {
        printf("Minimum number is %d\n", c);
    }

    return 0;
}
