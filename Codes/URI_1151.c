#include<stdio.h>
int main()
{
    int i,n,first=0,second=1,next;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        if(i<2)
        {
            next=i;
            printf("%d ",next);

        }

        else
        {
            next=first+second;
            first=second;
            second=next;

            if(i!=n-1)
            {
                printf("%d ",next);
            }
            else if(i==n-1)
            {
                printf("%d\n",next);
            }
        }
    }

    return 0;
}
