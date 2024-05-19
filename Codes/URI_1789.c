#include <stdio.h>
int main()
{
    int x,n;
    while(scanf("%d",&x)!=EOF)
    {
        int max=0;
        for(int i=0; i<x; i++)
        {
            scanf("%d", &n);
            if(n>max) max=n;
        }
        if(max<10) printf("1\n");
        else if(max<20)  printf("2\n");
        else  printf("3\n");
    }
    return 0;
}
