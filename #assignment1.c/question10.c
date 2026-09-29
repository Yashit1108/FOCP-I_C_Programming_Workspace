#include <stdio.h>

int main() {

    //question 10
    int productID, quantity;
    float price, discountPercentage, subtotal, discountAmount, finalAmount;

    printf("Enter Product ID: ");
    scanf("%d", &productID);

    printf("\nEnter Product Price: ");
    scanf("%f", &price);

    printf("\nEnter Quantity: ");
    scanf("%d", &quantity);

    printf("\nEnter Discount Percentage: ");
    scanf("%f", &discountPercentage);

    subtotal = price * quantity;

    discountAmount = subtotal * discountPercentage / 100;

    finalAmount = subtotal - discountAmount;

    printf("\nProduct ID = %d\n", productID);
    printf("Subtotal = %.2f\n", subtotal);
    printf("Discount Amount = %.2f\n", discountAmount);
    printf("Final Payable Amount = %.2f\n", finalAmount);

    return 0;
}