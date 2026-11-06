#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    // Outer loop for rows (1 to n)
    for(int i = 1; i <= n; i++) {
        // Inner loop for columns (prints 'i' asterisks for row 'i')
        for(int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n"); // Move to next line after completing row i
    }

    return 0;
}