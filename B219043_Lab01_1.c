#include <stdio.h>
#include <stdlib.h>
int main()
{
    printf("Enter a number\n");
    int a;
    scanf("%d", &a);
    printf("Last digit of your number is %d", a%10);
    return(0);
}
