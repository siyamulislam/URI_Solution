#include <stdio.h>
int main()
{
int k, c;
float sc, sum;
do{
c=0;
sum=0.0;
while(c<2)
{
scanf("%f", &sc);
if(sc>=0.0 && sc<=10.0)
{
c++;
sum+=sc;
}
else
{
printf("nota invalida\n");
}
}
printf("media = %.2f\n", sum/2.0);
do{

printf("novo calculo (1-sim 2-nao)\n");

scanf("%d", &k);

}while(k!=1 && k!=2);

}while(k!=2);

return 0;
}
