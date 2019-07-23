#include<stdio.h>
#define pi 3.14159

int main()
{
    float A, B, C;
    double ART, ARC, AT, AS, AR;

    while(scanf("%f %f %f", &A, &B, &C)==3)
    {
        ART = .5*(A*C);
        ARC = pi*C*C;
        AT = .5*(A+B)*C;
        AS = B*B;
        AR = A * B;

        printf("TRIANGULO: %.3lf\n", ART);
        printf("CIRCULO: %.3lf\n", ARC);
        printf("TRAPEZIO: %.3lf\n", AT);
        printf("QUADRADO: %.3lf\n", AS);
        printf("RETANGULO: %.3lf\n", AR);
    }

    return 0;

}
