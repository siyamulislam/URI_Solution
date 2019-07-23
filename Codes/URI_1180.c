#include<stdio.h>
int main()
{
    int i,x,N[1000],menor,position;
    scanf("%d",&x);

    for(i=0; i<x; i++)
    {
        scanf("%d",&N[i]);
    }
    menor=N[0];
    for(i=0; i<x; i++)
    {
        if(N[i]<menor)
        {
            menor=N[i];
            position=i;
        }
    }

    printf("Menor valor: %d\n",menor);
    printf("Posicao: %d\n",position);

    return 0;
}
