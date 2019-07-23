#include<stdio.h>
int main()
{
    int i,j,k,hn,m,n,x,y;
    for(;;)
    {
        scanf("%d",&n);
        if(n==0)
            break;
        int arr[n][n];
        hn=n/2;
        if(n%2==1)hn++;
        x=0;
        y=n-1;
        for(k=1; k<=hn; k++)
        {
            for(i=x; i<=y; i++)
            {
                for(j=x; j<=y; j++)
                {
                    arr[i][j]=k;
                }
            }
            x++;
            y--;
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
