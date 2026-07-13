#include <stdio.h>

int main() {
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);

    if (A > B && B <= C)
        printf(":)\n");
    else if (A < B && B >= C)
        printf(":(\n");
    else if (A < B && B < C) {
        if ((C - B) < (B - A))
            printf(":(\n");
        else
            printf(":)\n");
    }
    else if (A > B && B > C) {
        if ((B - C) < (A - B))
            printf(":)\n");
        else
            printf(":(\n");
    }
    else {
        if (C > B)
            printf(":)\n");
        else
            printf(":(\n");
    }

    return 0;
}
