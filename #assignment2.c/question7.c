#include<stdio.h>
int main(void) 
{
    // question 7
    int pin, amount, balance;

    printf("Enter PIN, amount and balance: ");
    scanf("%d %d %d", &pin, &amount, &balance);

    if (pin == 1234)
    {
        if (amount > 0 && amount % 100 == 0)
        {
            if (amount <= balance)
            {
                printf("Withdrawal Successful\n");
            }
            else
            {
                printf("Insufficient Balance\n");
            }
        }
        else
        {
            printf("Invalid Amount\n");
        }
    }
    else
    {
        printf("Invalid PIN\n");
    }

    return 0;
}