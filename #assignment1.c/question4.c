#include <stdio.h>

int main() {

    //question 4
    int a, b, c;
        float average;

        printf("Enter first number: ");
        scanf("%d", &a);

        printf("\nEnter second number: ");
        scanf("%d", &b);

        printf("\nEnter third number: ");
        scanf("%d", &c);

        average = (a + b + c) / 3.0;

        printf("\nAverage = %.2f\n", average);

        return 0;
}