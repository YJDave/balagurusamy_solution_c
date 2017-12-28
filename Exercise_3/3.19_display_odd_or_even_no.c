/* Write a program that determines whether a given integer is
even or odd and display number and description in same line */

#include<stdio.h>
void main()
{
    int n ;
    printf("Enter number:");
    scanf("%d",&n);
    if(n % 2 == 0)
    printf("%d is even number.\n",n);
    else 
    printf("%d is odd number.\n",n); 
}
