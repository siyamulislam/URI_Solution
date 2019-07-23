#include<stdio.h>
int main()
{
    char name[50];
    double salary, sold, total, i;

    while( scanf("%s %lf %lf", name, &salary, &sold)==3)
    {
        i=(sold*15)/100;
        total = salary+i;
        printf("TOTAL = R$ %.2lf\n", total);
    }
    return 0;
}
