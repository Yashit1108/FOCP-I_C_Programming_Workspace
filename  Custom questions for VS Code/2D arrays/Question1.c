#include <stdio.h>

int main(void) {
    int r, c;

    if (scanf("%d %d", &r, &c) != 2 || r <= 0 || c <= 0) {
        return 0;
    }

    int matrix[100][100];
    long long rowSums[100] = {0};
    long long columnSums[100] = {0};

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (scanf("%d", &matrix[i][j]) != 1) {
                return 0;
            }
            rowSums[i] += matrix[i][j];
            columnSums[j] += matrix[i][j];
        }
    }

    for (int i = 0; i < r; i++) {
        printf("%s%lld", i == 0 ? "" : " ", rowSums[i]);
    }
    printf("\n");

    for (int j = 0; j < c; j++) {
        printf("%s%lld", j == 0 ? "" : " ", columnSums[j]);
    }
    printf("\n");

    return 0;
}