#include<stdio.h>
int main()
{
    int a1,a2,a3,a4,a5,a6,a7,a8,a9,a10;
    printf("Please enter 10 numbers:  ");
    scanf("%d %d %d %d %d %d %d %d %d %d",&a1,&a2,&a3,&a4,&a5,&a6,&a7,&a8,&a9,&a10);
    printf("\nYour numbers are:\n");
    printf("%5d%3d\n",a1,a10);
    printf("%5d%3d\n",a2,a9);
    printf("%5d%3d\n",a3,a8);
    printf("%5d%3d\n",a4,a7);
    printf("%5d%3d\n",a5,a6);
    return 0;
}

