/*Given a set of 10 two-digit integer containing both positive and negative values,
 write a program using for loop to compute the sum of all positive values and print
  the sum and the number of values added. The program should use scanf to read the
  values and terminate when the sum exceeds 999. Do not use goto statement.
*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int sum,n,i,j=0;
    sum=0;
    printf("\n\nInput ten number both positive and negative:");
    for(i=0;i<10;i++)
    {
        scanf("%d",&n);
        if(n>0)
        {
            sum=sum+n;
            j++;
        }
            if(sum>999)
                break;
    }
        printf("\n\nThe value of positive numbers is:%d\nand the countable number is: %d",sum,j);
}

