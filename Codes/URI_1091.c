#include <stdio.h>

int main()
{
    int K;

    while (scanf("%d", &K) == 1 && K != 0)
    {
        int N, M;
        scanf("%d %d", &N, &M);

        for (int i = 0; i < K; i++)
        {
            int X, Y;
            scanf("%d %d", &X, &Y);

            if (X == N || Y == M)
                printf("divisa\n");
            else if (X > N && Y > M)
                printf("NE\n");
            else if (X < N && Y > M)
                printf("NO\n");
            else if (X > N && Y < M)
                printf("SE\n");
            else
                printf("SO\n");
        }
    }

    return 0;
}
