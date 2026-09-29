#include <stdio.h>

int main() {

    //question 8
    float basicSalary, allowance, bonus, finalSalary;

    printf("Enter Basic Salary: ");
    scanf("%f", &basicSalary);

    printf("\nEnter Allowance: ");
    scanf("%f", &allowance);

    printf("\nEnter Bonus: ");
    scanf("%f", &bonus);

    finalSalary = basicSalary + allowance + bonus;

    printf("\nFinal Salary = %.2f\n", finalSalary);

    return 0;
}