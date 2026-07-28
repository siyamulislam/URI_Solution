#include <stdio.h>

int main() {
    int N, x;
    scanf("%d", &N);

    int c2 = 0, c3 = 0, c4 = 0, c5 = 0;

    for (int i = 0; i < N; i++) {
        scanf("%d", &x);

        if (x % 2 == 0) c2++;
        if (x % 3 == 0) c3++;
        if (x % 4 == 0) c4++;
        if (x % 5 == 0) c5++;
    }

    printf("%d Multiplo(s) de 2\n", c2);
    printf("%d Multiplo(s) de 3\n", c3);
    printf("%d Multiplo(s) de 4\n", c4);
    printf("%d Multiplo(s) de 5\n", c5);

    return 0;
}
