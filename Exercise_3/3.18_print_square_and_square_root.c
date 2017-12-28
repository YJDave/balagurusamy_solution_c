/* Write a program to compute the values of square-roots and
squares of the numbers 0 to 100 in steps 10 and print output 
in tabular form */

#include<stdio.h>
#include<math.h>
void main()
{
    int i , sq;
    float sq_r ;
    printf("Number\t\t\tSquare-root\t\t\tSquare\n");
    for(i = 0 ; i <= 100 ; i = i + 10)
    {
        sq = i * i ;
        sq_r = sqrt(i);
        printf("%d\t\t\t%f\t\t\t%d\n", i, sq_r, sq);
    }
}
