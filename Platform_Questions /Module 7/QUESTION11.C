#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    // Outer loop for rows (1 to n)
    for(int i = 1; i <= n; i++) {
        // Inner loop for columns (1 to i)
        for(int j = 1; j <= i; j++) {
            // Check boundary conditions: first column, diagonal boundary (j == i), or final row (i == n)
            if (j == 1 || j == i || i == n) {
                printf("*");
            } else {
                printf(" "); // Print space inside the triangle
            }
        }
        printf("\n"); // Move to the next line
    }

    return 0;
}