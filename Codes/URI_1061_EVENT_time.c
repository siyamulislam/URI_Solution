#include<stdio.h>
int main()
    {
        int S, ss, es, d1,d2,h1,h2,m1,m2,s1,s2,w,x,y,z;
        scanf("%*s %d", &d1);
        scanf("%d %*s", &h1);
        scanf("%d %*s", &m1);
        scanf("%d",&s1);
        scanf("%*s %d", &d2);
        scanf("%d %*s", &h2);
        scanf("%d %*s", &m2);
        scanf("%d", &s2);
        ss=s1+(m1*60)+(h1*60*60)+(d1*24*60*60);
        es=s2+(m2*60)+(h2*60*60)+(d2*24*60*60);
        S=es-ss;
        w=S/86400;
        S=S%86400;
        x=S/3600;
        S=S%3600;
        y=S/60;
        S=S%60;
        z=S;

        printf("%d dia(s)\n",w);
        printf("%d hora(s)\n",x);
        printf("%d minuto(s)\n",y);
        printf("%d segundo(s)\n",z);


        return 0;
    }
