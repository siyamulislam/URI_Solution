#include<stdio.h>
int main()
{
    int i, a, b,t,sum;
    while(1)
        {
    scanf("%d %d",&a,&b);

    if( a<=0 || b<=0)
    {
        break;
    }

        if(a>b)
        {
            t=a;
            a=b;
            b=t;
        }

        sum=0;
        for(i=a; i<=b; i++)
        {
            sum+=i;
            printf("%d ",i);
        }
        printf("Sum=%d\n",sum);
    }


    return 0;
}
