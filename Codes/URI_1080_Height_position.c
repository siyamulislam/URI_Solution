#include<stdio.h>
int main()
{
    int i,n,x,y=0;
    for(i=1;i<=100;i++)
    {
        scanf("%d",&n);
        if(n>y)
        {
            y=n;
            x=i;
        }
    }
    printf("%d\n%d\n",y,x);
    return 0;
}
