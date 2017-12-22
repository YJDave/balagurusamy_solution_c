/*write a program to print the following outputs using for loops.
    *****
     ****
      ***
       **
        *
*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,no;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<i;j++)
        {
            printf(" ");
        }
        for(j=5;j>=i;j--)
        {
            printf("*");
        }
        printf("\n");
    }
}
