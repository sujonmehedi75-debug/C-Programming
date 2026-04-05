#include <stdio.h>

/**
 * Main function to solve the Watermelon problem. 
 * Can the watermelon be divided into two even weights?
 * (The original problem requires weight > 2 and even).
 */
int main() {
    int weight;

    printf("Enter the weight of the Watermelon: ");
    if (scanf("%d", &weight) != 1) return 1;

    if (weight > 2 && weight % 2 == 0) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
