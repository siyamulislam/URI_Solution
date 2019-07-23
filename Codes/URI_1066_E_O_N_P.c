#include<stdio.h>
int main()
{
    int i,e=0,o=0,p=0,n=0;
    int arr[5];

    for(i=0; i<5; i++)
    {
        scanf("%d",&arr[i]);
    }
        for(i=0; i<5;i++)
    {
        if (arr[i]%2==0)
        {
           e++;
        }
        if(arr[i]%2==1|| arr[i]%2==-1)
        {
           o++;
        }
        if (arr[i]<0)
        {
           n++;
        }
        if (arr[i]>0)
        {
           p++;
        }

    }

    printf("%d valor(es) par(es)\n",e);
    printf("%d valor(es) impar(es)\n",o);
    printf("%d valor(es) positivo(s)\n",p);
    printf("%d valor(es) negativo(s)\n",n);


    return 0;
}
