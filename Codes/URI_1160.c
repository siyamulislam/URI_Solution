#include<stdio.h>
int main()
{
    int i,t,pa,pb,yr;
    double g1,g2;
    scanf("%d",&t);
    for (i=0; i<t; i++)
    {
        scanf("%d%d%lf%lf",&pa,&pb,&g1,&g2);

        yr=0;
        while(pa<=pb)
        {
            pa=pa+pa*(g1/100.00);
            pb=pb+pb*(g2/100.00);
            yr++;

            if(yr>100)
            {
                printf("Mais de 1 seculo.\n");
                break;
            }

        }
        if(yr<=100)
        {
            printf("%d anos.\n",yr);

        }
    }

    return 0;
}
