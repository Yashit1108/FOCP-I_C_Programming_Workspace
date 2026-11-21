#include <stdio.h>

unsigned long long magnitude(long long value) {
    if (value >= 0) return (unsigned long long)value;
    return (unsigned long long)(-(value + 1)) + 1;
}

unsigned long long gcd(long long a, long long b) {
    unsigned long long x = magnitude(a);
    unsigned long long y = magnitude(b);

    while (y != 0) {
        unsigned long long remainder = x % y;
        x = y;
        y = remainder;
    }

    return x;
}

int main(void) {
    long long a, b;

    if (scanf("%lld %lld", &a, &b) != 2) return 0;

    printf("%llu\n", gcd(a, b));
    return 0;
}