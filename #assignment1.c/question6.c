#include <stdio.h>

int main() {
 
    //question 6
    int a, b, quotient, remainder;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("\nEnter second number: ");
    scanf("%d", &b);

    quotient = a / b;
    remainder = a % b;

    printf("\nQuotient = %d\n", quotient);
    printf("Remainder = %d\n", remainder);

    return 0;
}
  