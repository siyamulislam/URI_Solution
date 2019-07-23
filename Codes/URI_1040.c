#include<stdio.h>
int main()
{
    double N1,N2,N3,N4,N5,M,M2;
    while (scanf("%lf %lf %lf %lf", &N1, &N2, &N3, &N4)==4)
    {
        N1=N1*2;
        N2=N2*3;
        N3=N3*4;
        N4=N4*1;
        M =((N1+N2+N3+N4)/10);
        printf("Media: %.1lf\n", M);

        if(M>=7.0)
        {
            printf("Aluno aprovado.\n");
        }

        else if(M>=5.0 && M<=6.9)
       {
             printf("Aluno em exame.\n");

             scanf("%lf",&N5);
             printf("Nota do exame: %.1lf\n", N5);
             M2=(M+N5)/2;

             if(M2>=5.0)
            {
                printf("Aluno aprovado.\n");
            }
            else if(M2<=4.9)
            {
                printf("Aluno reprovado.\n");
            }
            printf("Media final: %.1lf\n", M2);

        }
        else
        {
             printf("Aluno reprovado.\n");
        }
    }

    return 0;
}
