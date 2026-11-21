#include <stdio.h>

int main(void) {
    int r, c;
    int matrix[100][100];

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
            int isRowMinimum = 1;
            int isColumnMaximum = 1;

            for (int k = 0; k < c; k++) {
                if (matrix[i][k] < matrix[i][j]) {
                    isRowMinimum = 0;
                    break;
                }
            }

            for (int k = 0; k < r; k++) {
                if (matrix[k][j] > matrix[i][j]) {
                    isColumnMaximum = 0;
                    break;
                }
            }

            if (isRowMinimum && isColumnMaximum) {
                printf("%d %d %d\n", i, j, matrix[i][j]);
                return 0;
            }
        }
    }

    printf("None\n");
    return 0;
}