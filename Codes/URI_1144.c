#include<stdio.h>
int main()
{
    int i,n,y,z;
    scanf("%d", &n);

    for(i=1;i<=n;i++)
    {
        y=i*i;
        z=i*y;
        printf("%d %d %d\n",i,y,z);
        printf("%d %d %d\n",i,y+1,z+1);
    }

    return 0;
}
