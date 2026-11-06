#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    // Outer loop for rows (1 to n)
    for(int i = 1; i <= n; i++) {
        // Inner loop prints numbers from 1 to i
        for(int j = 1; j <= i; j++) {
            printf("%d", j);
            // Print a space only if it's not the last number in the row to avoid trailing spaces
            if (j < i) {
                printf(" ");
            }
        }
        printf("\n"); // Move to next line after completing row i
    }

    return 0;
}
