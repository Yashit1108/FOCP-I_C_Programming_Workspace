#include<stdio.h>
int main(void) 
{
    // question 10
    int p1, p2;

    printf("Enter Player 1 and Player 2 choices: ");
    scanf("%d %d", &p1, &p2);

    if (p1 < 1 || p1 > 3 || p2 < 1 || p2 > 3)
    {
        printf("Invalid Input\n");
    }
    else if (p1 == p2)
    {
        printf("Draw\n");
    }
    else
    {
        switch (p1)
        {
            case 1:
                if (p2 == 3)
                    printf("Player 1 Wins\n");
                else
                    printf("Player 2 Wins\n");
                break;

            case 2:
                if (p2 == 1)
                    printf("Player 1 Wins\n");
                else
                    printf("Player 2 Wins\n");
                break;

            case 3:
                if (p2 == 2)
                    printf("Player 1 Wins\n");
                else
                    printf("Player 2 Wins\n");
                break;
        }
    }

    return 0;
}