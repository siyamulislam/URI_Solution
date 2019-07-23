#include<stdio.h>

int main()
{
    double A,B,MEDIA;
    while(scanf("%lf %lf", &A, &B)==2)
    {
        A=A*3.5;
        B=B*7.5;

        MEDIA = (A+B)/(3.5+7.5);
        printf("MEDIA = %.5lf\n", MEDIA);
    }

    return 0;
}

