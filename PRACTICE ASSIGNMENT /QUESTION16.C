#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    // Upper Half (including the widest row)
    for(int i = 1; i <= n; i++) {
        // 1. Leading spaces
        for(int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // 2. Centered asterisks
        for(int j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Lower Half (n - 1 rows in decreasing width)
    for(int i = n - 1; i >= 1; i--) {
        // 1. Leading spaces
        for(int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // 2. Centered asterisks
        for(int j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}