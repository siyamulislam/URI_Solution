#include<stdio.h>
int main()
{
    int c1, c2, u1, u2;
    float p1, p2, TOTAL;

    while (scanf("%d %d %f %d %d %f",  &c1, &u1, &p1, &c2, &u2, &p2)==6)
    {
        TOTAL = (u1*p1)+(u2*p2);
        printf("VALOR A PAGAR: R$ %.2f\n", TOTAL);
    }
    return 0;
}
