#include<stdio.h>
int main()
{
    int a=1,b=10,c=100,d=1000,e=10000;
    printf("%d %d %d %d %d \n",a,b,c,d,e);
    printf("%f %f %f %f %f \n",a,b,c,d,e);
    return 0;
}
/*format ‘%f’ expects 
argument of type ‘double’, 
but argument has type ‘int’
So it gets implicitly converted by
compiler and hence data loss is observed*/
