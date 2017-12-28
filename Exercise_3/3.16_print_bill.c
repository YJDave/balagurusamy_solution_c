/* The cost of one type of mobile service is Rs. 250 plus Rs. 1.25 
for each call made over and above 100 calls. Write a program to read 
customer codes and calls made and print the bill for each customer. */

#include<stdio.h>
void main()
{
    int no_c , c_code;
    float bill ;
    printf("Please enter your 4 digit customer code :\n");
    scanf("%d",&c_code);
    printf("Enter number of calls :\n");
    scanf("%d",&no_c);
    if(no_c <= 100)
    bill = 250 ;
    else
    bill = (250 + (1.25 * no_c)) ;
    printf("Your bill is %f\n",bill);  
}
