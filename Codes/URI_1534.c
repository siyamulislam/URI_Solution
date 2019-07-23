#include<stdio.h>
int main()
{
    int i,j,n,x,arr[70][70];
    while(scanf("%d",&n)!=EOF)
    {
        x=n-1;
        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                if(i==j)
                    arr[i][j]=1;
                      else
                    arr[i][j]=3;
                if(j==x)
                    arr[i][j]=2;
            }
            x--;
        }

        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                printf("%d",arr[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}
