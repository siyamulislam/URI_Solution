#include<stdio.h>
int main()
{
    double sc,c,sum=0,avg;

    while(c<2)
    {
        scanf("%lf",&sc);
        if( sc>10.00 || sc<0.00)
        {
            printf("nota invalida\n");
        }
        else
        {
            c++;
            sum+=sc;
        }
    }

    avg=sum/2.00;
    printf("media = %.2lf\n",avg);

    return 0;
}
