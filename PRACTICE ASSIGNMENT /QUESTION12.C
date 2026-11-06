#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    // Outer loop for rows (1 to n)
    for(int i = 1; i <= n; i++) {
        // Inner loop for columns (1 to n)
        for(int j = 1; j <= n; j++) {
            printf("%d", i * j);
            // Print a space between columns, avoiding trailing spaces
            if (j < n) {
                printf(" ");
            }
        }
        printf("\n"); // Move to the next line
    }

    return 0;
}