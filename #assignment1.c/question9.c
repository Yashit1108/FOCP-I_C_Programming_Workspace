#include <stdio.h>

int main() {

    //question 9
    float celsius, fahrenheit;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9.0 / 5.0) + 32;

    printf("\nTemperature in Fahrenheit = %.2f F\n", fahrenheit);

    return 0;
}