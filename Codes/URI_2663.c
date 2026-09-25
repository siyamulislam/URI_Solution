#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b)
{
    return *(int *)b - *(int *)a;
}

int main()
{
    int N, K;

    scanf("%d", &N);
    scanf("%d", &K);

    int scores[N];

    for (int i = 0; i < N; i++)
        scanf("%d", &scores[i]);

    qsort(scores, N, sizeof(int), compare);

    int cutoff = scores[K - 1];
    int answer = 0;

    for (int i = 0; i < N; i++)
    {
        if (scores[i] >= cutoff)
            answer++;
    }

    printf("%d\n", answer);

    return 0;
}
