#include <stdio.h>
int main()
{
    int i,j;
    printf("*\n**\n***\n****\n*****\n");
    printf("*\n");
    printf("**\n");
    printf("***\n");
    printf("****\n");
    printf("*****\n");
    for ( i=0;i<=5;i++)
    {
        for(j=0;j<=i;j++){
        printf("*");
        }
        printf("\n");
    }
}