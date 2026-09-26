#include <stdio.h>
#include <string.h>

int main()
{
    int N;

    while (scanf("%d", &N) == 1)
    {
        char words[10000][101];

        for (int i = 0; i < N; i++)
            scanf("%100s", words[i]);

        int Q;
        scanf("%d", &Q);

        while (Q--)
        {
            char query[101];
            scanf("%100s", query);

            int count = 0;
            int max_len = 0;

            int query_len = strlen(query);

            for (int i = 0; i < N; i++)
            {
                if (strncmp(words[i], query, query_len) == 0)
                {
                    count++;

                    int len = strlen(words[i]);

                    if (len > max_len)
                        max_len = len;
                }
            }

            if (count == 0)
                printf("-1\n");
            else
                printf("%d %d\n", count, max_len);
        }
    }

    return 0;
}
