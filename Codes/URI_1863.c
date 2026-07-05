#include <stdio.h>
#include <string.h>

int main() {
    int C;
    scanf("%d", &C);

    while (C--) {
        char name[101];
        int N;

        scanf("%s %d", name, &N);

        if (strcmp(name, "Thor") == 0)
            printf("Y\n");
        else
            printf("N\n");
    }

    return 0;
}
