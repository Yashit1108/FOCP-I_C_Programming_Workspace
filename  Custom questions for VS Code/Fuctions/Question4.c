#include <stdio.h>

int isPerfectSquare(long long n) {
    if (n < 0) return 0;

    for (long long i = 0; i <= n / (i + 1); i++) {
        if (i * i == n) return 1;
    }

    return 0;
}

int main(void) {
    long long n;

    if (scanf("%lld", &n) != 1) return 0;

    printf("%d\n", isPerfectSquare(n));
    return 0;
}