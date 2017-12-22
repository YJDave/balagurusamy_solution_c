/*write a program to print the following outputs using for loops.
    1
    22
    333
    4444
    55555
*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,no;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",i);
        }
        printf("\n");
    }
}
