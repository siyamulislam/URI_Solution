#include<stdio.h>
int main()
{
    int i,j,n,x,count;
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        count=0;
        scanf("%d",&x);
        for(j=2;j<x;j++)
        {
            if(x%j==0)
            {
                count++;
            }
        }
        if(count==0)
        {
            printf("%d eh primo\n",x);
        }
        else
        {
            printf("%d nao eh primo\n",x);
        }
    }
    return 0;
}
