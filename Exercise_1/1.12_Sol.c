#include<stdio.h>
#include<math.h>
#define PIE 3.14

void main()
{
	double p,d,a;//Here d is the distance between centre and the given point on circumference
	              //which is equal to radius of the circle.
	d = sqrt(pow((4 - 0),2) + (pow((5 - 0),2)));//centre of circle = 0,0. point on circumference = 4,5.
	a = PIE * d * d;
	p = 2 * PIE * d;
	printf("The area of the circle is %lf and perimeter is %lf\n",a,p);
}