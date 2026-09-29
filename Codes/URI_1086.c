#include <stdio.h>
#include <string.h>

#define MAX 10000

int planks[MAX + 1];

int solve(int length, int width_cm, int L)
{
    if (width_cm % L != 0)
        return -1;

    int need = width_cm / L;

    int single = planks[length];

    if (single >= need)
        return need;

    int remaining = need - single;
    int pairs = 0;

    for (int x = 1; x < length; x++)
    {
        int y = length - x;

        if (x > y)
            break;

        if (x == y)
            pairs += planks[x] / 2;
        else
            pairs += (planks[x] < planks[y])
                       ? planks[x]
                       : planks[y];
    }

    if (pairs < remaining)
        return -1;

    return single + remaining * 2;
}

int main()
{
    int N, M;

    while (scanf("%d %d", &N, &M) == 2)
    {
        if (N == 0 && M == 0)
            break;

        int L, K;

        scanf("%d", &L);
        scanf("%d", &K);

        memset(planks, 0, sizeof(planks));

        for (int i = 0; i < K; i++)
        {
            int x;
            scanf("%d", &x);
            planks[x]++;
        }

        int ans1 = solve(N, M * 100, L);
        int ans2 = solve(M, N * 100, L);

        int answer = -1;

        if (ans1 != -1)
            answer = ans1;

        if (ans2 != -1 &&
            (answer == -1 || ans2 < answer))
            answer = ans2;

        if (answer == -1)
            printf("impossivel\n");
        else
            printf("%d\n", answer);
    }

    return 0;
}
