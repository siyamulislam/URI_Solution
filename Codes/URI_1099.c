#include<stdio.h>
int main()
{
    int i,j,k,s,e,n,sum;

    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        scanf("%d%d",&s,&e);
        if(s<e)
        {
            for(j=s+1,sum=0; j<e; j++)
            {
                if(j%2!=0)
                {
                    sum+=j;
                }
            }
            printf("%d\n",sum);
        }
        else if(s>e)
        {
            for(k=e+1,sum=0; k<s; k++)
            {
                if(k%2!=0)
                {
                    sum+=k;
                }
            }
            printf("%d\n",sum);
        }
        else if(s==e)
        {
            sum=0;
            printf("%d\n",sum);
        }
    }
    return 0;
}
