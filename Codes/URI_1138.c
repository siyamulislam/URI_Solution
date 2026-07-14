#include <stdio.h>

void countDigits(long long n, long long cnt[]) {
    for (int i = 0; i < 10; i++)
        cnt[i] = 0;

    if (n <= 0)
        return;

    long long factor = 1;

    while (factor <= n) {
        long long lower = n % factor;
        long long cur = (n / factor) % 10;
        long long higher = n / (factor * 10);

        // Count digits 1 to 9
        for (int d = 1; d <= 9; d++) {
            if (cur > d)
                cnt[d] += (higher + 1) * factor;
            else if (cur == d)
                cnt[d] += higher * factor + lower + 1;
            else
                cnt[d] += higher * factor;
        }

        // Count digit 0 (ignore leading zeros)
        if (higher != 0) {
            if (cur > 0)
                cnt[0] += higher * factor;
            else
                cnt[0] += (higher - 1) * factor + lower + 1;
        }

        factor *= 10;
    }
}

int main() {
    long long A, B;

    while (scanf("%lld %lld", &A, &B) == 2) {
        if (A == 0 && B == 0)
            break;

        long long left[10], right[10];

        countDigits(A - 1, left);
        countDigits(B, right);

        for (int i = 0; i < 10; i++) {
            if (i)
                printf(" ");
            printf("%lld", right[i] - left[i]);
        }
        printf("\n");
    }

    return 0;
}
