#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    // Outer loop for rows (1 to n)
    for(int i = 1; i <= n; i++) {
        // Inner loop 1: Print leading spaces (n - i spaces)
        for(int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        
        // Inner loop 2: Print asterisks (i asterisks)
        for(int j = 1; j <= i; j++) {
            printf("*");
        }
        
        printf("\n"); // Move to the next line
    }

    return 0;
}