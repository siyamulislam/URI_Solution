#include<stdio.h>
int main()
{
    float A,B,C;
    double Perimetro,Area;
    while(scanf("%f %f %f", &A, &B, &C)==3)
    {
        if(A+B>C && A+C>B &&  B+C>A)

        {
           Perimetro = A+B+C;
           printf("Perimetro = %.1lf\n", Perimetro);
        }
        else
        {
            Area = ((A+B)/2)*C;
            printf("Area = %.1lf\n", Area);
        }
    }
    return 0;
}
