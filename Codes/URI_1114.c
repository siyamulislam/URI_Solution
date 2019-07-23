#include<stdio.h>
int main()
{
    int i, pass;
    while(1)
    {
        scanf("%d",&pass);

        if( pass==2002)
        {
            printf("Acesso Permitido\n");
            break;
        }


        else
        {
            printf("Senha Invalida\n");
        }
    }
    return 0;
}
