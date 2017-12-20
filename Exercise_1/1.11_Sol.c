#include<stdio.h>
#include<math.h>

void main()
{
	double x1,x2,y1,y2,d;
	printf("Enter coordinates of 1st point ");
	scanf("%lf%lf",&x1,&y1);
	printf("\nEnter coordinates of 2nd point ");
	scanf("%lf%lf",&x2,&y2);
	d = sqrt(pow((x2 - x1),2) + pow((y2 - y1),2));
	printf("The distance between the points is: %lf",d);
}