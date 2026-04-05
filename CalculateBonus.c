#include <stdio.h>

/**
 * Main function to check bonus eligibility based on salary and years of service.
 * Salary must be greater than 2000 and service more than 5 years.
 */
int main() {
    float salary;
    int years;

    printf("Enter employee's salary: ");
    if (scanf("%f", &salary) != 1) return 1;

    printf("Enter years of service: ");
    if (scanf("%d", &years) != 1) return 1;

    if (salary > 2000 && years > 5) {
        printf("Eligible For Bonus\n");
    } else {
        printf("Not Eligible For Bonus\n");
    }

    return 0;
}
