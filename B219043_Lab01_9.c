#include <stdio.h>
int f(int m)
{
	if(m==1)
		return 0;
	if(m==2)
		return 1;
	return(f(m-1)+f(m-2));
}
int main()
{
	printf("The next 3 numbers are:");
	printf("%d, %d, %d",f(10),f(11),f(12));
}