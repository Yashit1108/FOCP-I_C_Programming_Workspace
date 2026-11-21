#include <stdio.h>

long long digitSum(long long value) {
    long long sum = 0;

    while (value > 0) {
        sum += value % 10;
        value /= 10;
    }

    return sum;
}

int main(void) {
    int n;

    if (scanf("%d", &n) != 1 || n < 0 || n > 100000) {
        return 0;
    }

    long long values[100000];

    for (int i = 0; i < n; i++) {
        if (scanf("%lld", &values[i]) != 1) return 0;
    }

    long long pairs = 0;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (digitSum(values[i]) == digitSum(values[j])) {
                pairs++;
            }
        }
    }

    printf("%lld\n", pairs);
    return 0;
}