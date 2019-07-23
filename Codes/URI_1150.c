#include<stdio.h>
int main()
{
    int i,x,z,sum=0,c=0;
    scanf("%d%d", &x,&z);
    while(z<=x)
    {
        scanf("%d",&z);
    }
    while(sum<=z)
    {
        sum+=x;
        x++;
        c++;
    }
    /* for(i=x;sum<z;i++)
     {
         sum+=i;
         c++;

     }
     */
    printf("%d\n",c);
    return 0;
}
