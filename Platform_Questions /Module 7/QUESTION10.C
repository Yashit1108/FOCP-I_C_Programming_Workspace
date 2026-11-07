#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    // Outer loop for rows (1 to n)
    for(int i = 1; i <= n; i++) {
        // Inner loop for columns (1 to n)
        for(int j = 1; j <= n; j++) {
            // Check if we are on a boundary (first row, last row, first col, last col)
            if (i == 1 || i == n || j == 1 || j == n) {
                printf("*");
            } else {
                printf(" "); // Print space for the hollow interior
            }
        }
        printf("\n"); // Move to the next line after each row
    }

    return 0;
}