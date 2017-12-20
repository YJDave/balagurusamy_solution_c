#include <stdio.h>

void main()
{
	float x,y;
	int z;
	printf("Enter values of x and y: ");
	scanf("%f%f",&x,&y);
	z = x+y;
	printf("The values of x, y and z are: %f %f %d\n",x,y,z);
}