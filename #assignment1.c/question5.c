#include <stdio.h>

int main() {
    //question 5 
    int a, b, temp;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("\nEnter second number: ");
    scanf("%d", &b);

    printf("\nBefore swapping: %d %d\n", a, b);

    temp = a;
    a = b;
    b = temp;

    printf("After swapping: %d %d\n", a, b);

    return 0;
}