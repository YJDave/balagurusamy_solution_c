/* Program that reads floating point number and display
two right most digits of integer part of number */

#include<stdio.h>

void main()
{
        float n ; 
        int i , j; 
        printf("Enter floating point number:\n");
        scanf("%f",&n);
        i = (int)n;
        j = i % 100;
        printf("\nRight most digit is: %d\n",j);


}
 

