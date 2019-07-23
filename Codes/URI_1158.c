#include<stdio.h>
int main()
{
    int d,i,x,y,n;
    scanf("%d",&n);

    for(d=0; d<n; d++)
    {
        int c=0, sum=0;
        scanf("%d%d",&x,&y);

        for(i=x; c<y; i++)
        {
            if(i%2!=0)
            {
                sum+=i;
                c++;
            }
        }
        printf("%d\n",sum);
    }

    return 0;
}
