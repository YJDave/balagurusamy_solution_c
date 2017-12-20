#include<stdio.h>

void main()
{
	float a,b,c,x;
	printf("Enter three numbers: ");
	scanf("%f%f%f",&a,&b,&c);
	if(b==c)
		printf("Division by zero error!! Solution cannot be not found.");
	else
	{
		x = a/(b-c);
		printf("x = %f",x);
	}
}