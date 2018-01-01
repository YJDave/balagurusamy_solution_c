/* Write a program to print a square of size 5 by using the character S as shown below:
S S S S S
S S S S S
S S O S S
S S S S S
S S S S S
*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,j,mid;


    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(i==3&&j==3)
                printf("0 ");
            else
                printf("s ");
        }
        printf("\n");
    }
}
