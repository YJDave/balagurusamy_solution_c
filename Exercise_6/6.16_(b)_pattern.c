/*Write a program to print a square size 5 by using the character S as shown below
S S S S S
S       S
S       S
S       S
S S S S S
*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,n;
    n=5;
    printf("\n\n");
    for(i=1;i<=n;i++)
        printf("s ");
    printf("\n");
    for(i=1;i<=n-2;i++)
    {
        printf("s ");
        for(j=1;j<=n-2;j++)
            printf("  ");
        printf("s\n");
    }
    for(i=1;i<=n;i++)
        printf("s ");
    printf("\n");
}
