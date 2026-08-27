#include <stdio.h>

int main() {
    int n;
    char name[100];

    int totalS = 0, totalB = 0, totalA = 0;
    int successS = 0, successB = 0, successA = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%s", name);

        int s, b, a;
        int s1, b1, a1;

        scanf("%d %d %d", &s, &b, &a);
        scanf("%d %d %d", &s1, &b1, &a1);

        totalS += s;
        totalB += b;
        totalA += a;

        successS += s1;
        successB += b1;
        successA += a1;
    }

    double pS = (double)successS * 100 / totalS;
    double pB = (double)successB * 100 / totalB;
    double pA = (double)successA * 100 / totalA;

    printf("Pontos de Saque: %.2f %%\n", pS);
    printf("Pontos de Bloqueio: %.2f %%\n", pB);
    printf("Pontos de Ataque: %.2f %%\n", pA);

    return 0;
}
