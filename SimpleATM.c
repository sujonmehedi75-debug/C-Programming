#include <stdio.h>

/**
 * Main function for a simple ATM withdrawal transaction.
 */
int main() {
    float balance, withdraw;

    printf("Enter Balance: ");
    if (scanf("%f", &balance) != 1) return 1;

    printf("Enter withdrawal amount: ");
    if (scanf("%f", &withdraw) != 1) return 1;

    if (withdraw <= balance) {
        printf("Transaction Successfull\n");
    } else {
        printf("Insufficient Balance\n");
    }

    return 0;
}
