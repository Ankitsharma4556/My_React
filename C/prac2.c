/*Convert Celsius to Fahrenheit:
Write a program that converts a temperature from Celsius to Fahrenheit. Use the formula: F = (C * 9/5) + 32.*/

#include <stdio.h>
int main() {
    float celsius, fahrenheit;

    printf("Enter the celcius degree you want to convert: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * (9.0/5.0) + 32.0);

    printf("%f celsius is equivalent to %f fahrenheit\n", celsius, fahrenheit);

    return 0;
}