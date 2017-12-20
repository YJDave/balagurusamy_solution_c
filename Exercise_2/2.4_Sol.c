#include <stdio.h>

void main()
{
	float x,y;
	printf("Enter x and y ");
	scanf("%f%f",&x,&y);
	if(y == 0)
		printf("Division not possible.\n");
	else
		printf("Division is %f\n",(x/y));
}