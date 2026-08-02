#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int H, M, O;
        scanf("%d %d %d", &H, &M, &O);

        printf("%02d:%02d - ", H, M);

        if (O == 1)
            printf("A porta abriu!\n");
        else
            printf("A porta fechou!\n");
    }

    return 0;
}
