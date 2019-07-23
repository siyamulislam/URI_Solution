#include<stdio.h>
int main()
{
    int i,x;
    while(1)
    {

        scanf("%d", &x);
        if(x==0)
        {
            break;
        }

        else
        {
            for(i=1; i<=x; i++)
            {
                if(i<x)
                {
                    printf("%d ",i);
                }
                if(i==x)
                {
                    printf("%d\n",i);
                }
            }
        }
    }

    return 0;
}
