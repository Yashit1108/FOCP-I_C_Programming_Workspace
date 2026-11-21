#include <stdio.h>

int main(void) {
    int n;

    if (scanf("%d", &n) != 1 || n < 2 || n > 100000) {
        return 0;
    }

    long long values[100000];

    for (int i = 0; i < n; i++) {
        if (scanf("%lld", &values[i]) != 1) return 0;
    }

    unsigned long long minimumDifference = 0;
    int firstPair = 1;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            unsigned long long difference;

            if (values[i] >= values[j]) {
                difference = (unsigned long long)values[i]
                           - (unsigned long long)values[j];
            } else {
                difference = (unsigned long long)values[j]
                           - (unsigned long long)values[i];
            }

            if (firstPair || difference < minimumDifference) {
                minimumDifference = difference;
                firstPair = 0;
            }
        }
    }

    printf("%llu\n", minimumDifference);
    return 0;
}