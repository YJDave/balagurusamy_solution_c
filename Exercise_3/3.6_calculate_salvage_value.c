/* Depreciation = (Purchase Price - Salvage Value) / Years of Service
Program to determine the salvage value when purchase price , years 
of service and annual depreciation are given */

#include<stdio.h>
void main()
{
    float d , p , s , y ;
    printf("Enter annual depreciation : ");
    scanf("%f",&d);
    printf("Enter purchase price : ");
    scanf("%f",&p);
    printf("Enter years of service: ");
    scanf("%f",&y);
    s = p - (d * y);
    printf("Salvage Value is : %f \n",s);
}  
