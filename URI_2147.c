#include <stdio.h>
#include <string.h>

int main() {
    int C;
    scanf("%d", &C);

    char word[10005];

    while (C--) {
        scanf("%s", word);
        printf("%.2f\n", strlen(word) / 100.0);
    }

    return 0;
}
