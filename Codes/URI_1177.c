#include<stdio.h>
int main()
{
    int N[1000];
    int i,j,t;
    scanf("%d",&t);

    for(i=0,j=0; i<1000; i++,j++)
    {
        if(j==t)
        {
            j=0;
        }
        printf("N[%d] = %d\n",i,j);
    }

    return 0;
}
