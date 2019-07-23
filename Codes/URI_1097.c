#include<stdio.h>
int main()
{
    int i,j,x=5;
    for(i=1;i<=9;i+=2)
    {

        for(j=x+2;j>=x;j--)
        {
             printf("I=%d J=%d\n",i,j);
        }x+=2;
    }

    return 0;
}
