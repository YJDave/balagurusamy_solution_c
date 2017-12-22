/*Write a program to print a table of values of the functiobn
y=exp(-x)
for varying from 0.1.to 0.10
*/
#include<stdio.h>
#include<math.h>
void main()
{
    float i,j;
    float y;
    printf("Table for the function Y=exp(-x)\n");
    printf(" x\t 0.1\t 0.2\t 0.3\t 0.4\t 0.5\t 0.6\t 0.7\t 0.8\t 0.9\n");
    printf("===============================================================================\n");
    for(i=0.0;i<=9.0;i=i+1.0)
    {
        printf("%.1f  ||",i);
        for(j=0.1;j<=1.0;j=j+0.1)
        {
            y=exp(-(i+j));
            printf("\t%.4f ",y);
        }
        printf("\n");
    }
getch();
}

