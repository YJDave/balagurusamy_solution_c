/* Write a program to read two integer values m and n and to 
decide and print whether m is multiple of n. */

#include<stdio.h>
void main()
{
    int m , n ;
    printf("Enter 2 values:\n");
    scanf("%d %d",&m,&n);
    if(m % n == 0)
    printf("%d is multiple of %d\n", m , n);
    else
    printf("%d is not multiple of %d\n", m , n);
} 
