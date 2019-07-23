#include<stdio.h>
int main()
{
    int i,count=0;

    int arr [5];
    for(i=0; i<5; i++)
    {
        scanf("%d",&arr[i]);
    }
        for(i=0; i<5;i++)
    {
        if (arr[i]%2==0)
        {
           count++;
        }
    } printf("%d valores pares\n",count);


    return 0;
}


