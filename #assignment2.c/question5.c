#include<stdio.h>
int main(void) 
{
    // question 5
    int a, b;
    char op;

    printf("Enter two numbers and operator: ");
    scanf("%d %d %c", &a, &b, &op);

    switch (op)
    {
        case '+':
            printf("%d\n", a + b);
            break;

        case '-':
            printf("%d\n", a - b);
            break;

        case '*':
            printf("%d\n", a * b);
            break;

        case '/':
            if (b == 0)
                printf("Cannot divide by zero\n");
            else
                printf("%d\n", a / b);
            break;

        case '%':
            if (b == 0)
                printf("Cannot divide by zero\n");
            else
                printf("%d\n", a % b);
            break;

        default:
            printf("Invalid Operator\n");
    }

    return 0;
}