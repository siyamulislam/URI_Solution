#include<stdio.h>
int main()
{
    int i,x,y,temp;
    scanf("%d%d", &x,&y);
    temp=x;
    for(i=1; i<=y; i++)
    {
        if(i<x)
        {
            printf("%d ",i);
        }
        if(i==x)
        {
            printf("%d",i);
            printf("\n");
            x+=temp;
        }
    }

    return 0;
}
