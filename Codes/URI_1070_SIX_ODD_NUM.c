#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    if(n%2==0)
    {
        n++;
    }
    for(i=0;i<6;i++,n=n+2)
    {
        printf("%d\n",n);
    }
    return 0;
}
