#include<stdio.h>
int main()
{
    double i,k=1,sum=0,n;
    for(i=1;i<=100;i++)
    {
        n=k/i;

        sum+=n;
    }
    printf("%.2lf\n",sum);
    return 0;
}
