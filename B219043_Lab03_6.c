#include <stdio.h>
int main()
{
    printf("Enter in celsius\n");
    float a;
    scanf("%f", &a);
    printf("%.3f celsius  is %.3f fahrenheit", a,(32+a*180.0/100));
    return(0);
}
