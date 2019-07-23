#include<stdio.h>

int main()
{
    int A,B,SUM;
    while(scanf("%d %d", &A, &B)==2)
    {
        SUM=A+B;
        printf("SOMA = %d\n", SUM);
    }
    return 0;
}
