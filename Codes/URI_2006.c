#include <stdio.h>

int main() {
    int T, x, count = 0;

    scanf("%d", &T);

    for (int i = 0; i < 5; i++) {
        scanf("%d", &x);
        if (x == T)
            count++;
    }

    printf("%d\n", count);

    return 0;
}
