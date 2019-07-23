#include<stdio.h>
int main ()
{
    int x,y,a,tester=0,i;
    while(scanf("%d %d", &x,&y)!=EOF) //first line of input
    {
        int arr[y];
        for(i=0; i<y; i++)
            scanf("%d", &arr[i]); //second line of input
        for (i=0; i<y-1; i++)
        {
            a=arr[i+1]-arr[i];
            if(a<0)a *= -1; // if the difference is negative
            if(a>x)
            {
                tester=5;
                break;
            }
        }
        if(tester==5)
            printf("GAME OVER\n");
        else
            printf("YOU WIN\n");

    }
    return 0;
}
