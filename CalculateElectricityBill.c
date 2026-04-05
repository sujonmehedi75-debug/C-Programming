#include <stdio.h>

/**
 * Main function to calculate electricity bill based on units consumed.
 */
int main() {
    int unit;
    float bill;

    printf("Enter Total Units: ");
    if (scanf("%d", &unit) != 1) return 1;

    if (unit <= 100) {
        bill = unit * 5.0f;
    } else {
        bill = unit * 8.0f;
    }

    printf("Electricity Bill = %.2f\n", bill);
    return 0;
}
