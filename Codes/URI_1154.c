#include<stdio.h>
int main()
{
    int n,count=0,sum=0;
    float avg;

    while(1)
    {
        scanf("%d",&n);

        if(n<0)
        {
            break;
        }
        else
        {
            sum+=n;
            count++;
        }

    }
    avg=((sum*1.0)/count);
    printf("%.2f\n",avg);
    return 0;
}
