#include<stdio.h>
int main()
{
    int i,a,n,sum=0;
    scanf("%d%d",&a,&n);
    while(n<=0)
    {
        scanf("%d",&n);
    }
    for(i=0;i<n;i++)
    {
        sum+=a;
        a++;
    }
    printf("%d\n",sum);

    return 0;
}
