#include<stdio.h>
int main()
{
    int n,i;
    while(scanf("%d",&n)==1)
    {
        for(i=2; i<=n; i++)
        {

            if(i%2==0)
            printf("%d^2 = %d\n",i,i*i);
        }

    }

    return 0;
}
