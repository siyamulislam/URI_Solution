#include<stdio.h>
 int main()
 {
     int a, b, s, x;
     while(scanf("%d %d %d", &a, &b, &s)==3)
     {
         x = (a+b+abs(a-b))/2;
         x = (x+s+abs(x-s))/2;

         printf("%d eh o maior\n", x);
     }

     return 0;
 }
