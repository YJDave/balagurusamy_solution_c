/* Program that reads floating point numbers and displays
right-most digit of integer part of number */

#include<stdio.h>

void main()
{
	float n ;	
	int i , j; 
	printf("Enter floating point number:\n");
	scanf("%f",&n);
	i = (int)n;
	j = i % 10;
	printf("\nRight most digit is: %d\n",j);
	

}
