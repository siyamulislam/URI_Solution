#include<stdio.h>
int main()
{
    int i,j,n;
    long long int x,first,second,next;

    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        first=0,second=1;

        scanf("%lld",&x);

        for(j=0; j<=x; j++)
        {
            if(j<2)
            {
                next=j;
            }
            else
            {
                next=first+second;
                first=second;
                second=next;
            }
        }
        printf("Fib(%lld) = %lld\n",x,next);

    }
    return 0;
}
