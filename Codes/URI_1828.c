#include <stdio.h>
#include <string.h>

int main() {
    int T;
    scanf("%d", &T);

    for (int i = 1; i <= T; i++) {
        char s[20], r[20];
        scanf("%s %s", s, r);

        printf("Caso #%d: ", i);

        if (strcmp(s, r) == 0) {
            printf("De novo!\n");
        }
        else if (
            (strcmp(s, "tesoura") == 0 && (strcmp(r, "papel") == 0 || strcmp(r, "lagarto") == 0)) ||
            (strcmp(s, "papel") == 0 && (strcmp(r, "pedra") == 0 || strcmp(r, "Spock") == 0)) ||
            (strcmp(s, "pedra") == 0 && (strcmp(r, "lagarto") == 0 || strcmp(r, "tesoura") == 0)) ||
            (strcmp(s, "lagarto") == 0 && (strcmp(r, "Spock") == 0 || strcmp(r, "papel") == 0)) ||
            (strcmp(s, "Spock") == 0 && (strcmp(r, "tesoura") == 0 || strcmp(r, "pedra") == 0))
        ) {
            printf("Bazinga!\n");
        }
        else {
            printf("Raj trapaceou!\n");
        }
    }

    return 0;
}
