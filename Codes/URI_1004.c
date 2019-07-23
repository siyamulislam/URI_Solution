#include<stdio.h>

int main()
{
    int A,B,PROD;
    while(scanf("%d %d", &A, &B)==2)
    {
        PROD=A*B;
        printf("PROD = %d\n", PROD);
    }
    return 0;
}
