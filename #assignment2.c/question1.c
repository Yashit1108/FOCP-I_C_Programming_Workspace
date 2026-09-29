#include<stdio.h>
int main(void) 
{
    //question 1
    int n;
    printf("enter an integer: ");
    scanf("%d", &n);
    if(n%2==0 && n%5==0)
    {
        printf("special\n");
    }
    else if(n%2==0)
    {
        printf("even\n");
    }
    else if(n%5==0)
    {
        printf("Five\n");
    }
    else
    {
        printf("odd/other\n");
    }
    return 0;
}