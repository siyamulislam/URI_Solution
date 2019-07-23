#include<stdio.h>
int main()
{
    int X,Y;
    double T;
    while(scanf("%d %d", &X, &Y)==2)
    {
        if(X==1)
        {
            T=4.00*Y;
            printf("Total: R$ %.2lf\n", T);
        }
        else if(X==2)
        {
            T=4.50*Y;
            printf("Total: R$ %.2lf\n", T);
        }
        else if(X==3)
        {
            T=5.00*Y;
            printf("Total: R$ %.2lf\n", T);
        }
        else if(X==4)
        {
            T=2.00*Y;
            printf("Total: R$ %.2lf\n", T);
        }
        else if(X==5)
        {
            T=1.50*Y;
            printf("Total: R$ %.2lf\n", T);
        }

    }
    return 0;
}
