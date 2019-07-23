#include<stdio.h>
int main()
{
    int i,k=0;

    double arr [6];
    for(i=0; i<6; i++)
    {
        scanf("%lf",&arr[i]);
    }
        for(i=0; i<6;i++)
    {
        if (arr[i]>0)
        {
           k++;
        }
    } printf("%d valores positivos\n",k);


    return 0;
}

