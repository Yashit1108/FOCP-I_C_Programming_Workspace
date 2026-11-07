#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    // Outer loop for rows (1 to n)
    for(int i = 1; i <= n; i++) {
        // Inner loop runs i times to print the row number 'i'
        for(int j = 1; j <= i; j++) {
            printf("%d", i);
            // Print a space between numbers, avoiding trailing spaces
            if (j < i) {
                printf(" ");
            }
        }
        printf("\n"); // Move to the next line
    }

    return 0;
}
