#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    // Outer loop for rows (1 to n)
    for(int i = 1; i <= n; i++) {
        // Inner loop prints decreasing asterisks: n - i + 1 stars for row i
        for(int j = 1; j <= n - i + 1; j++) {
            printf("*");
        }
        printf("\n"); // Move to next line after completing row i
    }

    return 0;
}
