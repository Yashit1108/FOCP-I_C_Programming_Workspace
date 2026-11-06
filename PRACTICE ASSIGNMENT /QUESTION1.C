#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    // Outer loop for rows
    for(int i = 1; i <= n; i++) {
        // Inner loop for columns
        for(int j = 1; j <= n; j++) {
            printf("*");
        }
        printf("\n"); // Move to the next line after printing one row
    }

    return 0;
}