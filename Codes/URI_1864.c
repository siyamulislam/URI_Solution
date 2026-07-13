#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    char str[] = "LIFE IS NOT A PROBLEM TO BE SOLVED";

    for (int i = 0; i < N; i++) {
        printf("%c", str[i]);
    }

    printf("\n");

    return 0;
}
