#include<stdio.h>
int main()
{
    int a,b,c,i;
    double area;
    while(1)
    {
        scanf("%d",&a);
        if(a==0)
            break;
        scanf("%d%d",&b,&c);
        area=a*b*100.0/c;

        for(i=1; i*i<=area; i++)
        {

        }
        i--;

        printf("%d\n",i);
    }
}
