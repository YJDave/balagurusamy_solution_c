/*The present value (popularly known as book value )of an item is given by the relationship
P=c(1-d)n
Where c=original cost
D=rate of depreciation
N=number of years
P=present value after years.
If p is considered the scrap value at the end of useful life of the item, write a program to compute the useful life in years given the original cost, depreciation rate, and the scrap value.
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    int original_cost,no_year;
    double rate_depre,present_value,Present_value,lob,hor;

    printf("Input original cost, rate of depreciation, present value");
    scanf("%d%lf%lf",&original_cost,&rate_depre,&present_value);

    lob=log(present_value/original_cost);
    hor=log(1-rate_depre);
    no_year=lob/hor;

    printf("year=%d",no_year);
}


