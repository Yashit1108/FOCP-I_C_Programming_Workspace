#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int count = 1; // Counter to track consecutive numbers across rows

    // Outer loop for rows (1 to n)
    for(int i = 1; i <= n; i++) {
        // Inner loop runs i times for row i
        for(int j = 1; j <= i; j++) {
            printf("%d", count);
            count++; // Increment the counter after printing each number
            
            // Print a space between numbers, avoiding trailing spaces
            if (j < i) {
                printf(" ");
            }
        }
        printf("\n"); // Move to the next line
    }
    return 0;
}