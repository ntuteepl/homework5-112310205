#include <stdio.h>
#include <stdlib.h>

int main()
{
    double h,m,a,b,c,t;
    scanf("%lf %lf",&h,&m);
    if(h>=0&&m>=0)
        {
    a=30*h+0.5*m;
    b=m*6;

    if(a<b)
        {
            t=a;
            a=b;
            b=t;
        }
    c=a-b;
    if(c>180)
        {
        c=360-c;
        }
    printf("%.3f\n",c);
        }
}

