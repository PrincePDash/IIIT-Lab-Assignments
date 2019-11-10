#include<stdio.h>
int main()
{
    float x,y;
    scanf("%f %f",&x,&y);
    float p=x*y;
    float s=x+y;
    float total=s*s+p*(s-x)*(p+y);
    printf("%f",total);
    return 0;
}

