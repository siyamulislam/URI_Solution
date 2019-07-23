#include<stdio.h>
int main()
{
    int i,count=0;

    double arr[6], sum=0, avg;
    for(i=0; i<6; i++)
    {
        scanf("%lf",&arr[i]);
    }
        for(i=0; i<6;i++)
    {
        if (arr[i]>0)
        {
           sum=sum+arr[i];
           count++;

        }
    }
    avg = sum/count;
    printf("%d valores positivos\n",count);
    printf("%.1lf\n",avg);

    return 0;
}


