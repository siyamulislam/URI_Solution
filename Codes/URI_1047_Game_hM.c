#include<stdio.h>
int main()
{
    int sh, sm, eh,  em, th, tm;
    while(scanf("%d %d %d %d", &sh, &sm, &eh, &em )==4)
    {
        th=eh-sh;
        tm=em-sm;
        if (th<0)
        {
            th=24+(eh-sh);
        }
        if(tm<0)
        {
            tm=60+(em-sm);
            th--;
        }
        if (eh == sh && em == sm)
        {
            printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
        }
        else
        {
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", th, tm);
        }
    }
    return 0;
}

