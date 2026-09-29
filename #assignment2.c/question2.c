#include<stdio.h>
int main(void) 
{
    // question 2
    int a, b, c;
    printf("Enter three different integers: ");
    scanf("%d %d %d", &a, &b, &c);
    if((a>b&&b<c)||(a<b&&b>c))
    {
        printf("%d\n", a);
    }
    else if((b>a&&b<c)||(b<a&&b>c))
    {
        printf("%d\n", b);
    }
    else
    {
        printf("%d\n", c);
    }
    return 0;
}