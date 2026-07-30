#include <stdio.h>
#include <string.h>

int main() {
    char n1[20], n2[40];
    int tc = 1;

    while (scanf("%s", n1) != EOF) {
        scanf("%s", n2);

        int len1 = strlen(n1);
        int len2 = strlen(n2);

        int count = 0;
        int last = -1;

        for (int i = 0; i <= len2 - len1; i++) {
            if (strncmp(n2 + i, n1, len1) == 0) {
                count++;
                last = i + 1;
            }
        }

        printf("Caso #%d:\n", tc++);

        if (count == 0) {
            printf("Nao existe subsequencia\n");
        } else {
            printf("Qtd.Subsequencias: %d\n", count);
            printf("Pos: %d\n", last);
        }

        printf("\n");
    }

    return 0;
}
