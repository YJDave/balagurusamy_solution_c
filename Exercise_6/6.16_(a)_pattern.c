/*
Write a program to print a square size 5 by using the character S as shown below
S S S S S
S S S S S
S S S S S
S S S S S
S S S S S
*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j;
    printf("\n\n");
    for(i=0;i<=4;i++)
    {
        for(j=1;j<=5;j++)
            printf(" S");
        printf("\n\n");
    }
    getch();

}
