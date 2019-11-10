#include <stdio.h>
#include <stdlib.h>
int main()
{
    printf("Enter in degrees\n");
    float a;
    scanf("%f", &a);
    float backup=a;
    if (a>360.0)
        a=a-360.0*((int)a/360);
    printf("%.5f degrees is %.5f radians", backup,a/57.29578);
    return(0);
}
