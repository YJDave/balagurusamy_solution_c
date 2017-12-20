#include<stdio.h>
#include<math.h>

void main()
{
	double a,b,c,s,area;
	printf("Enter three sides of triangle: ");
	scanf("%lf%lf%lf",&a,&b,&c);
	s = (a+b+c)/2;
	area = sqrt(s*(s-a)*(s-b)*(s-c));//In gcc compile it as gcc eg.c -lm.
	printf("Area = %lf",area);
}