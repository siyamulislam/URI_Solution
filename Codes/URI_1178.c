#include<stdio.h>
int main()
{
    int i,N[100];
    double x,k;
    scanf("%lf",&x);

    for(i=0; i<100; i++)
    {
        printf("N[%d] = %.4lf\n",i,x);
        x/=2.00;
    }

    return 0;
}
