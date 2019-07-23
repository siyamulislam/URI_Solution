#include<stdio.h>
int main()
{
    float A,B,C, MEDIA;

    while (scanf("%f %f %f", &A, &B, &C)==3)
    {
        A=A*2;
        B=B*3;
        C=C*5;
        MEDIA = (A+B+C)/10;

        printf("MEDIA = %.1f\n", MEDIA);
    }


    return 0;
}
