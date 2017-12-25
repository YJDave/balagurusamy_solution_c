/* Write a program to read three values using scanf statement and print the following
results:
a) Sum of the values
b) Average of the three values
c) Largest of three values
d) Smallest of three values     */

#include<stdio.h>
void main()
{
    int a , b , c , sum , l , s ;
    float avg ;
    printf("Enter 3 values:\n");
    scanf("%d %d %d",&a , &b , &c);
    sum = a + b + c ;
    avg = (float)sum / 3 ;
    l = ((a>b) && (a>c)) ? a : ((b>c) ? b : c);
    s = ((a<b) && (a<c)) ? a : ((b<c) ? b : c);
    printf("%d is the sum of given three values.\n",sum);
    printf("%f is the average of given three values.\n",avg);
    printf("%d is the largest of the all three values.\n",l);
    printf("%d is the smallest of the all three values.\n",s);
}
