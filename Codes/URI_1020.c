#include<stdio.h>
int main()
{
    int n, y, m, d;
    while(scanf("%d", &n)==1)
    {
        y = n/365;
        d = n%365;
        m = d/30;
        d = d%30;

        printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", y, m, d);
    }
    return 0;
}
