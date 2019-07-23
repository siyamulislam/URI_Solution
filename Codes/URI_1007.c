#include<stdio.h>
int main()

{
    int A,B,C,D, DIFERENCA;

    while (scanf("%d %d %d %d",&A,&B,&C,&D)==4)
    {
        DIFERENCA = (A*B)-(C*D);
        printf("DIFERENCA = %d\n", DIFERENCA);
    }

    return 0;
}
