//// Assignment 2 - Questions 1 to 10
#include<stdio.h>
int main(void) 
{
    //question 1
    // int n;
    // printf("enter an integer: ");
    // scanf("%d", &n);
    // if(n%2==0 && n%5==0)
    // {
    //     printf("special\n");
    // }
    // else if(n%2==0)
    // {
    //     printf("even\n");
    // }
    // else if(n%5==0)
    // {
    //     printf("Five\n");
    // }
    // else
    // {
    //     printf("odd/other\n");
    // }
//     return 0;
// }
    //question 2
//     int a, b, c;
//     printf("Enter three different integers: ");
//     scanf("%d %d %d", &a, &b, &c);
//     if((a>b&&b<c)||(a<b&&b>c))
//     {
//         printf("%d\n", a);
//     }
//     else if((b>a&&b<c)||(b<a&&b>c))
//     {
//         printf("%d\n", b);
//     }
//     else
//     {
//         printf("%d\n", c);
//     }
//     return 0;
// }
    //question 3
//     int units;
//     float bill;

//     printf("enter units consumed: ");
//     scanf("%d", &units);
//     if(units<=100)
//     {
//         bill = units * 2;
//     }
//     else if(units<=200)
//     {
//         bill = 100 * 2 + (units - 100) * 3;
//     }
//     else
//     {
//         bill = (100*2) + (100*3) + (units - 200) * 5;   
//     }
//     printf("Total bill = %.2f\n", bill);    
//     return 0;
// }
    //question 4
//     int a, b, c;
//     printf("Enter three angles: ");
//     scanf("%d %d %d", &a, &b, &c);

//     if (a <= 0 || b <= 0 || c <= 0 || a + b + c != 180)
//     {
//         printf("Invalid\n");
//     }
//     else if (a < 90 && b < 90 && c < 90)
//     {
//         printf("Acute\n");
//     }
//     else if (a == 90 || b == 90 || c == 90)
//     {
//         printf("Right\n");
//     }
//     else
//     {
//         printf("Obtuse\n");
//     }

//     return 0;
// }
    //question 5
//     int a, b;
//     char op;

//     printf("Enter two numbers and operator: ");
//     scanf("%d %d %c", &a, &b, &op);

//     switch (op)
//     {
//         case '+':
//             printf("%d\n", a + b);
//             break;

//         case '-':
//             printf("%d\n", a - b);
//             break;

//         case '*':
//             printf("%d\n", a * b);
//             break;

//         case '/':
//             if (b == 0)
//                 printf("Cannot divide by zero\n");
//             else
//                 printf("%d\n", a / b);
//             break;

//         case '%':
//             if (b == 0)
//                 printf("Cannot divide by zero\n");
//             else
//                 printf("%d\n", a % b);
//             break;

//         default:
//             printf("Invalid Operator\n");
//     }

//     return 0;
// }
    //question 6
//     char ch;

//     printf("Enter a character: ");
//     scanf(" %c", &ch);

//     if (ch >= '0' && ch <= '9')
//     {
//         printf("Digit\n");
//     }
//     else if (ch == 'a' || ch == 'e' || ch == 'i' ||
//              ch == 'o' || ch == 'u' || ch == 'A' ||
//              ch == 'E' || ch == 'I' || ch == 'O' ||
//              ch == 'U')
//     {
//         printf("Vowel\n");
//     }
//     else if ((ch >= 'a' && ch <= 'z') ||
//              (ch >= 'A' && ch <= 'Z'))
//     {
//         printf("Consonant\n");
//     }
//     else
//     {
//         printf("Special Character\n");
//     }

//     return 0;
// }
    //question 7
//     int pin, amount, balance;

//     printf("Enter PIN, amount and balance: ");
//     scanf("%d %d %d", &pin, &amount, &balance);

//     if (pin == 1234)
//     {
//         if (amount > 0 && amount % 100 == 0)
//         {
//             if (amount <= balance)
//             {
//                 printf("Withdrawal Successful\n");
//             }
//             else
//             {
//                 printf("Insufficient Balance\n");
//             }
//         }
//         else
//         {
//             printf("Invalid Amount\n");
//         }
//     }
//     else
//     {
//         printf("Invalid PIN\n");
//     }

//     return 0;
// }
    //question 8
//     int day;

//     printf("Enter day number: ");
//     scanf("%d", &day);

//     switch (day)
//     {
//         case 1:
//             printf("Monday - Working Day\n");
//             break;

//         case 2:
//             printf("Tuesday - Working Day\n");
//             break;

//         case 3:
//             printf("Wednesday - Working Day\n");
//             break;

//         case 4:
//             printf("Thursday - Working Day\n");
//             break;

//         case 5:
//             printf("Friday - Working Day\n");
//             break;

//         case 6:
//             printf("Saturday - Weekend\n");
//             break;

//         case 7:
//             printf("Sunday - Weekend\n");
//             break;

//         default:
//             printf("Invalid Day\n");
//     }

//     return 0;
// }
    //question 9
//     float marks, attendance;

//     printf("Enter marks and attendance: ");
//     scanf("%f %f", &marks, &attendance);

//     if (marks >= 90 && attendance >= 70)
//     {
//         printf("Special Scholarship\n");
//     }
//     else if (marks >= 75 && attendance >= 75)
//     {
//         printf("Eligible\n");
//     }
//     else
//     {
//         printf("Not Eligible\n");
//     }

//     return 0;
// }
    //question 10
//     int p1, p2;

//     printf("Enter Player 1 and Player 2 choices: ");
//     scanf("%d %d", &p1, &p2);

//     if (p1 < 1 || p1 > 3 || p2 < 1 || p2 > 3)
//     {
//         printf("Invalid Input\n");
//     }
//     else if (p1 == p2)
//     {
//         printf("Draw\n");
//     }
//     else
//     {
//         switch (p1)
//         {
//             case 1:
//                 if (p2 == 3)
//                     printf("Player 1 Wins\n");
//                 else
//                     printf("Player 2 Wins\n");
//                 break;

//             case 2:
//                 if (p2 == 1)
//                     printf("Player 1 Wins\n");
//                 else
//                     printf("Player 2 Wins\n");
//                 break;

//             case 3:
//                 if (p2 == 2)
//                     printf("Player 1 Wins\n");
//                 else
//                     printf("Player 2 Wins\n");
//                 break;
//         }
//     }

//     return 0;
// }