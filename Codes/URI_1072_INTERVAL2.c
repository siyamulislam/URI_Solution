#include<stdio.h>
int main()
{
    int n,i,in=0,out=0;
    int arr[1000];
    while(scanf("%d",&n)==1)
    {
        for(i=0; i<n; i++)
        {
            scanf("%d",&arr[i]);
            if(arr[i]>=10 && arr[i]<=20)
                in++;
            else
                out++;

        }
        printf("%d in\n%d out\n",in,out);
    }

    return 0;
}

