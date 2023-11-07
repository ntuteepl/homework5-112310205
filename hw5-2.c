#include <stdio.h>
#include <stdlib.h>

int main()
{
    float f,i;
    scanf("%f",&f);
    if(f<=800)
        {
        i=(float) f*9/10;
        printf("%0.1f",i);
        }
    else if(f>800&&f<1500)
        {
        i=(float) (f*9/10)*9/10;
        printf("%0.1f",i);
        }
    else if(f>=1500)
        {
        i=(float) (f*9/10)*79/100;
        printf("%0.1f",i);
        }
}
