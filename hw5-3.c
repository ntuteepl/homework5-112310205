#include <stdio.h>
#include <stdlib.h>

int main()
{
    double f,i,c;
    scanf("%lf %lf",&f,&i);
    if(f<=60)
        {
        c=(double) f*i;
        }
    if(f>60&&f<=120)
        {
        c=(double) 60*i+(f-60)*i*1.33;
        }
    if(f>120)
        {
        c=(double) 60*i+60*i*1.33+(f-120)*i*1.66;
        }
    printf("%.1f\n",c);
}

