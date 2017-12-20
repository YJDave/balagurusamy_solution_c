#include<stdio.h>
#include<math.h>
#define PIE 3.14//Symbolic constant.

void main()
{
	double r = 4,a,p;
	a = PIE * r * r;
	p = 2 * PIE * r;
	printf("The area of the circle with radius = 4 is %0.2lf and perimeter is %0.2lf\n",a,p);
}