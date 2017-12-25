/* Write a program to read a four digit integer 
and print the sum of its digits. */

#include<stdio.h>
void main()
{
    int n, sum = 0, a1 , a=10;
    printf("Enter 4 digit number: \n");
    scanf("%d",&n);
    a1 = n;
    for(int i = 0 ; i < 4 ; i++)
    {
        a1 = a1 % 10 ;
        sum = sum + a1 ;
        a1 = n / a;
        a = a * 10 ;
    }
    printf("Sum of the digits is %d\n",sum);
}
