#include<stdio.h>
int main()
{
    int i,j,temp;
    int arr[20];

    for(i=19; i>=0; i--)
    {
        scanf("%d", &arr[i]);
    }

   /* for(i=0,j=19; i<10; i++,j--)
    {
       temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    } */

    for(i=0; i<20; i++)
    {
        printf("N[%d] = %d\n",i, arr[i]);
    }

    return 0;
}
