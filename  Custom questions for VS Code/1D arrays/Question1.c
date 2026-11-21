#include <stdio.h>

int main(void) {
    int n;

    if (scanf("%d", &n) != 1 || n <= 0) {
        return 0;
    }

    int value;
    int previous;
    int currentRun = 1;
    int longestRun = 1;

    if (scanf("%d", &previous) != 1) {
        return 0;
    }

    for (int i = 1; i < n; i++) {
        if (scanf("%d", &value) != 1) {
            return 0;
        }

        if (value > previous) {
            currentRun++;
        } else {
            currentRun = 1;
        }

        if (currentRun > longestRun) {
            longestRun = currentRun;
        }

        previous = value;
    }

    printf("%d\n", longestRun);
    return 0;
}