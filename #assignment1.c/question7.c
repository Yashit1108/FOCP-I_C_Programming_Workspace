#include <stdio.h>

int main() {

    //question 7
    int m1, m2, m3, m4, m5, total;
    float percentage;

    printf("Enter marks of subject 1: ");
    scanf("%d", &m1);

    printf("\nEnter marks of subject 2: ");
    scanf("%d", &m2);

    printf("\nEnter marks of subject 3: ");
    scanf("%d", &m3);

    printf("\nEnter marks of subject 4: ");
    scanf("%d", &m4);

    printf("\nEnter marks of subject 5: ");
    scanf("%d", &m5);

    total = m1 + m2 + m3 + m4 + m5;

    percentage = total / 5.0;

    printf("\nTotal Marks = %d\n", total);
    printf("Percentage = %.2f%%\n", percentage);

    return 0;
}