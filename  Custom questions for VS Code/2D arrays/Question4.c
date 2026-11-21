#include <stdio.h>

int main(void) {
    int r, c;
    int matrix[100][100];
    int peaks = 0;

    if (scanf("%d %d", &r, &c) != 2 || r <= 0 || c <= 0 ||
        r > 100 || c > 100) {
        return 0;
    }

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (scanf("%d", &matrix[i][j]) != 1) {
                return 0;
            }
        }
    }

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            int isPeak = 1;

            if (i > 0 && matrix[i][j] <= matrix[i - 1][j]) isPeak = 0;
            if (i < r - 1 && matrix[i][j] <= matrix[i + 1][j]) isPeak = 0;
            if (j > 0 && matrix[i][j] <= matrix[i][j - 1]) isPeak = 0;
            if (j < c - 1 && matrix[i][j] <= matrix[i][j + 1]) isPeak = 0;

            if (isPeak) {
                peaks++;
            }
        }
    }

    printf("%d\n", peaks);
    return 0;
}