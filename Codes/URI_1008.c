#include<stdio.h>
int main()
{
    int N, T;
    float P;
    double TS;

    while (scanf("%d %d %f", &N, &T, &P)==3)
    {
        TS = T * P;
        printf("NUMBER = %d\n", N);
        printf("SALARY = U$ %.2lf\n", TS);
    }

    return 0;
}
