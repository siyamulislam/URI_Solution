#include<stdio.h>
int main()
{
    int i,j,n,x,y;
    for(;;)
    {
        scanf("%d",&n);
        if(n==0)
            break;
        int arr[n][n];

        for(i=0; i<n; i++)
        {
            x=i+1;
            y=2;
            for(j=0; j<=i; j++,x--)
            {
                arr[i][j]=x;
            }
            for(j=i+1; j<=n; j++,y++)
            {
                arr[i][j]=y;
            }
        }

        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                if(j==0)
                    printf("%3d",arr[i][j]);
                else
                    printf(" %3d",arr[i][j]);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}

