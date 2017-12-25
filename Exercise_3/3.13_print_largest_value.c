/* Given three values, write a program to read three 
values from keyboard and print out the largest of 
them without using if statement. */

#include<stdio.h>
void main()
{
    int a , b , c , l;
    printf("Enter 3 values :\n");
    scanf("%d%d%d",&a,&b,&c);
    l = ((a>b) && (a>c)) ? a : ((b>c) ? b : c);
    printf("%d is the largest of the all three values.\n",l);
}
