#include <stdio.h>
int main()
{
    printf("Enter a number between 0 to 32767\n");
    char ch[5];
    for(int x=0;x<5;x++)
        scanf("%c",&ch[x]);
    for(int x=0;x<5;x++,printf("\n"))
        for(int y=x;y<5;y++)
            printf("%c   ",ch[y]);
    return(0);
}
