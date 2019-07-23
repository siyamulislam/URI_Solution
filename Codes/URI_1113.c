#include<stdio.h>
int main()
{
    int i, a, b,t,sum;
    while(1)
    {
        scanf("%d %d",&a,&b);

        if( a==b)
        {
            break;
        }

        if(a<b)
        {

            printf("Crescente\n");
        }
        else if (a>b)
        {
            printf("Decrescente\n");
        }
    }
    return 0;
}
