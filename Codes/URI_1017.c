#include<stdio.h>
int main()
{
    int t, s;
    float f;

    while (scanf("%d %d", &t, &s)==2)
    {
        f = (t * s)/12.0;
        printf("%.3f\n", f);
    }
    return 0;
}
