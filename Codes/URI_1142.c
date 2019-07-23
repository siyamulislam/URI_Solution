#include<stdio.h>
int main()
{
    int i,n,temp=1;
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        printf("%d ",temp);
    printf("%d ",++temp);
    printf("%d ",++temp);
    printf("PUM\n");
    temp+=2;
    }

    return 0;
}
