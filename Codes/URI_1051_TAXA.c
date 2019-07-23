#include<stdio.h>
int main()
{
    float input,tax,increase;
    while(scanf("%f",&input)==1)
    {
        if(input<=2000.00)
            printf("Isento\n");
        else{
            if(input>2000.00 && input<=3000.00){
                increase=input-2000.00;
                tax=(increase*8.00)/100;
            }
            else if(input>3000.00 && input<=4500.00){
                increase=input-3000.00;
                tax=(increase*18.00)/100+80.00;
            }
            else{
                increase=input-4500.00;
                tax=(increase*28.00)/100.00+350.00;
            }
            printf("R$ %.2f\n",tax);
    }

    }
    return 0;
}
