#include <stdio.h>

int main(void) {
    int n;
    long long target;

    if (scanf("%d %lld", &n, &target) != 2 || n < 0 || n > 100000) {
        return 0;
    }

    long long values[100000];

    for (int i = 0; i < n; i++) {
        if (scanf("%lld", &values[i]) != 1) return 0;
    }

    long long pairs = 0;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (values[i] + values[j] == target) {
                pairs++;
            }
        }
    }

    printf("%lld\n", pairs);
    return 0;
}