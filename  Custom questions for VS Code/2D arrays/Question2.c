#include <stdio.h>

int main(void) {
    int n;
    int matrix[100][100];
    int symmetric = 1;

    if (scanf("%d", &n) != 1 || n <= 0 || n > 100) {
        return 0;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (scanf("%d", &matrix[i][j]) != 1) {
                return 0;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                symmetric = 0;
            }
        }
    }

    if (symmetric) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}