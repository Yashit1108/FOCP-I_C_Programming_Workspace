#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    // Outer loop for rows (1 to n)
    for(int i = 1; i <= n; i++) {
        // Inner loop 1: Print leading spaces (i - 1 spaces)
        for(int j = 1; j <= i - 1; j++) {
            printf(" ");
        }
        
        // Inner loop 2: Print asterisks (2 * (n - i) + 1 asterisks)
        for(int j = 1; j <= 2 * (n - i) + 1; j++) {
            printf("*");
        }
        
        printf("\n"); // Move to the next line
    }

    return 0;
}