#include<stdio.h>
#include<math.h>
#define PIE 3.14

void main()
{
	double d,a,p;  
	d = sqrt(pow((5 - 2),2) + (pow((6 - 2),2)));//centre of circle = 0,0. point on circumference = 4,5.
	a = PIE * d * d/4;
	p = PIE * d;
	printf("The area of the circle is %lf and perimeter is %lf\n",a,p);
}