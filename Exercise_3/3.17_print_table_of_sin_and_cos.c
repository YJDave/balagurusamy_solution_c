/* Write a program to print table of sin and cos functions for 
the interval from 0 to 180 degrees in increments of 15 in 
tabular form */

#include<stdio.h>
#include<math.h>
void main()
{
    float pi = 3.14159 , rad , x , x1;
    int i;
    rad = pi / 180 ;
    printf("X(degrees)\t\t\tsin(X)\t\t\tcos(X)\n");
    for(i = 0 ; i <= 180 ; i = i + 15)
    {
        x = sin(rad*i);
        x1 = cos(rad*i);
        printf("%d\t\t\t%f\t\t\t%f\n", i, x, x1);
    }
}
