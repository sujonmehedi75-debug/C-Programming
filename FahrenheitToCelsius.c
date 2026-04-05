#include <stdio.h>

/**
 * Main function to convert temperature from Fahrenheit to Celsius.
 */
int main() {
    float celsius, fahrenheit;

    printf("Enter temperature in Fahrenheit: ");
    if (scanf("%f", &fahrenheit) != 1) return 1;

    celsius = (fahrenheit - 32.0f) * 5.0f / 9.0f;
    printf("Temperature in Celsius: %.2f\n", celsius);

    return 0;
}
