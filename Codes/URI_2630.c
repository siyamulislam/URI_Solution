#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);

    for (int tc = 1; tc <= T; tc++)
    {
        char method[10];
        int R, G, B;
        int P;

        scanf("%s", method);
        scanf("%d %d %d", &R, &G, &B);

        if (method[0] == 'e')  // eye
        {
            P = (int)(0.30 * R + 0.59 * G + 0.11 * B);
        }
        else if (method[0] == 'm' && method[1] == 'e')  // mean
        {
            P = (R + G + B) / 3;
        }
        else if (method[0] == 'm' && method[1] == 'a')  // max
        {
            P = R;

            if (G > P) P = G;
            if (B > P) P = B;
        }
        else  // min
        {
            P = R;

            if (G < P) P = G;
            if (B < P) P = B;
        }

        printf("Caso #%d: %d\n", tc, P);
    }

    return 0;
}
