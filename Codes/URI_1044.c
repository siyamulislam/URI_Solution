#include<stdio.h>
int main()
{
    int A,B;
    while(scanf("%d %d", &A, &B)==2)
    {
        if(A%B==0 || B%A==0)
        {
            printf("Sao Multiplos\n");
        }
        else
        {
            printf("Nao sao Multiplos\n");
        }


    }
    return 0;
}
