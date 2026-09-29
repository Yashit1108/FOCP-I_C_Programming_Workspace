#include<stdio.h>
int main(void) 
{
    // question 6
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    if (ch >= '0' && ch <= '9')
    {
        printf("Digit\n");
    }
    else if (ch == 'a' || ch == 'e' || ch == 'i' ||
             ch == 'o' || ch == 'u' || ch == 'A' ||
             ch == 'E' || ch == 'I' || ch == 'O' ||
             ch == 'U')
    {
        printf("Vowel\n");
    }
    else if ((ch >= 'a' && ch <= 'z') ||
             (ch >= 'A' && ch <= 'Z'))
    {
        printf("Consonant\n");
    }
    else
    {
        printf("Special Character\n");
    }

    return 0;
}