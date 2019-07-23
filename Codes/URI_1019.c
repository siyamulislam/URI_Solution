#include<stdio.h>
int main()
{
    int N, H, M, S;
    while(scanf("%d", &N)==1)
    {
        H=N/3600;
        S=N%3600;
        M=S/60;
        S=S%60;

    printf("%d:%d:%d\n",H,M,S);

    }
    return 0;
}
