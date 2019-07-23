#include<stdio.h>
int main()
{
    int i,n,E[5],O[5],j=0,k=0,x;
    for(i=0; i<15; i++)
    {
        scanf("%d",&n);

        if(n%2==0)
        {
            E[j]=n;
            j++;
            if(j==5)
            {
                for(x=0; x<5; x++)
                {
                    printf("par[%d] = %d\n",x,E[x]);
                    E[x]=0;
                    j=0;
                }
            }
        }
        else
        {
            O[k]=n;
            k++;
            if(k==5)
            {
                for(x=0; x<5; x++)
                {
                    printf("impar[%d] = %d\n",x,O[x]);
                    O[x]=0;
                    k=0;
                }
            }
        }
    }
    for(i=0; i<5; i++)
    {
        if(O[i]==0)
            break;
        printf("impar[%d] = %d\n",i,O[i]);
    }

    for(i=0; i<5; i++)
    {
        if(E[i]==0)
            break;
        printf("par[%d] = %d\n",i,E[i]);
    }

    return 0;
}
