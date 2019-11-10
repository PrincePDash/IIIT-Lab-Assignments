#include <stdio.h>
#include <math.h>
int main()
{
    for(int i=1;i<=8;i++)
    {
    	if(i==8)
    		printf("%d",(int)pow(2,(i-1)));
    	else
        	printf("%d, ",(int)pow(2,(i-1)));
    }
    return(0);
}
