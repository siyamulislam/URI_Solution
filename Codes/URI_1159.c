#include<stdio.h>
int main()
{
    int i,n;

    while(1)
    {
        int c=0,sum=0;
        scanf("%d",&n);
        if(n==0)
        {
            break;
        }
        else
        {
            for(i=n;c<5;i++)
        {
            if(i%2==0)
            {
                sum+=i;
                c++;
            }
        }
        printf("%d\n",sum);
        }

    }

    return 0;
}
