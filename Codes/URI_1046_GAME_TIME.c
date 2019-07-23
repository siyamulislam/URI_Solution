#include<stdio.h>
int main()
{
    int s , e, t ;
    while(scanf("%d %d", &s,&e)==2)
    {
        t=e-s;
        if (t<0)
        {
            t=24+(e-s);
        }
        if (t==0)
        {
            printf("O JOGO DUROU 24 HORA(S)\n");
        }
        else
        {
            printf("O JOGO DUROU %d HORA(S)\n", t);
        }
    }
    return 0;
}
