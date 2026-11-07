#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    // Outer loop for rows (1 to n)
    for(int i = 1; i <= n; i++) {
        // Inner loop for columns (1 to n)
        for(int j = 1; j <= n; j++) {
            // If the sum of row and column indices is even, print 'X', else 'O'
            if ((i + j) % 2 == 0) {
                printf("X");
            } else {
                printf("O");
            }
        }
        printf("\n"); // Move to the next line
    }

    return 0;
}
