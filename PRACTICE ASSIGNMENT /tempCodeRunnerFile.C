#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    // Upper half including the middle row
    int upper = (n + 1) / 2;
    for(int i = 1; i <= upper; i++) {
        // Left wing stars
        for(int j = 1; j <= i; j++) {
            printf("*");
        }
        // Central spaces
        int spaces = n - 2 * i;
        for(int j = 1; j <= spaces; j++) {
            printf(" ");
        }
        // Right wing stars (on the middle row, right wing has one fewer star if n is odd to avoid overlap, or match standard butterfly symmetry)
        int right_stars = (i == upper && n % 2 != 0) ? i - 1 : i;
        for(int j = 1; j <= right_stars; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Lower half
    int lower = n / 2;
    for(int i = lower; i >= 1; i--) {
        // Left wing stars
        for(int j = 1; j <= i; j++) {
            printf("*");
        }
        // Central spaces
        int spaces = n - 2 * i;
        for(int j = 1; j <= spaces; j++) {
            printf(" ");
        }
        // Right wing stars
        for(int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}