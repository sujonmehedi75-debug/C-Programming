#include <stdio.h>

/**
 * Main function to calculate the total and average of three subjects.
 */
int main() {
    float m1, m2, m3, total, average;

    printf("Enter marks of 3 subjects: ");
    if (scanf("%f %f %f", &m1, &m2, &m3) != 3) return 1;

    total = m1 + m2 + m3;
    average = total / 3.0f;

    printf("Total: %.2f\n", total);
    printf("Average: %.2f\n", average);

    return 0;
}
