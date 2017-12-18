/* Program to obtain length and width of rectangle from user 
and return area and perimeter of rectangle */

#include<stdio.h>

void main()
{
	float  l , w , area , perimeter ;
	printf("Enter length and width of rectangle:\n");
	scanf("%f%f",&l , &w);
	area = l * w ;
	perimeter = 2 *(l + w) ;
	printf("Area of rectangle is %f and perimeter is %f\n",area , perimeter);

}
