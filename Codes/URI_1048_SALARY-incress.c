#include<stdio.h>
int main()
{
   double s,i,ts;
   int r;
   char ch='%';
    while(scanf("%lf", &s)==1)
    {
            if (s>=0 && s<=400.00)
        {
            r=15;
            i=(r*s)/100;
            ts=s+i;
        }
        else if (s>=400.01 && s<=800)
        {
            r=12;
            i=(r*s)/100;
            ts=s+i;
        }
        else if (s>=800.01 && s<=1200)
        {
            r=10;
            i=(r*s)/100;
            ts=s+i;
        }
        else if (s>=1200.01 && s<=2000)
        {
            r=7;
            i=(r*s)/100;
            ts=s+i;
        }
        else if (s>2000)
        {
            r=4;
            i=(r*s)/100;
            ts=s+i;
        }
        printf("Novo salario: %.2lf\n", ts);
        printf("Reajuste ganho: %.2lf\n", i);
        printf("Em percentual: %d %c\n", r, ch);
   }

return 0;
}
