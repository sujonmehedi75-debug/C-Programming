#include <stdio.h>

/**
 * Main function to convert temperature from Celsius to Fahrenheit.
 */
int main() {
    float celsius, fahrenheit;

    printf("Enter temperature in Celsius: ");
    if (scanf("%f", &celsius) != 1) return 1;

    fahrenheit = (celsius * 9.0f / 5.0f) + 32.0f;
    printf("Temperature in Fahrenheit: %.2f\n", fahrenheit);

    return 0;
}
