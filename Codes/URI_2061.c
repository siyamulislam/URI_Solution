#include <stdio.h>
#include <string.h>

int main() {
    int N, M;
    scanf("%d %d", &N, &M);

    char action[10];

    while (M--) {
        scanf("%s", action);

        if (strcmp(action, "fechou") == 0)
            N++;
        else
            N--;
    }

    printf("%d\n", N);

    return 0;
}
