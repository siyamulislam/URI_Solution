#include<stdio.h>
int main()
{
    double l,h=1,sum=0,n;
    for(l=1;l<=39;l+=2)
    {
        n=l/h;
        h=2*h;

        sum+=n;
    }
    printf("%.2lf\n",sum);
    return 0;
}

