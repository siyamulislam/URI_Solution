#include<stdio.h>
int main()
{
    int X;
    float Y,CAC;

    while(scanf("%d %f", &X, &Y)==2)

    {
        CAC = X / Y;
        printf("%.3f km/l\n", CAC);

    }

    return 0;

}
