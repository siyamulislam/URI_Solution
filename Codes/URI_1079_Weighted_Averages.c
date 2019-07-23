#include<stdio.h>
int main()
{
    int i,n;
    float a,b,c,avg;
    scanf("%d",&n);
    for (i=0; i<n; i++)
    {
        scanf("%f %f %f",&a,&b,&c);
        a=a*2;
        b=b*3;
        c=c*5;

        avg = (a+b+c)/(2+3+5);

        printf("%.1f\n",avg);
    }
    return 0;
}
