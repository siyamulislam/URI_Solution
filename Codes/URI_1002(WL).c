#include<stdio.h>

#define pi 3.14159

int main()
{
    double A,R;

    while (scanf("%lf", &R)==1)

    {
        A=pi*R*R;
        printf("A=%.4lf\n", A);
    }

    return 0;
}
