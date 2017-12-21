#include<stdio.h>
#include<math.h>

void main()
{
	float x,y;
	printf("Enter x ,y ");
	scanf("%f%f",&x,&y);
	printf("               -------                    -------\n");
	printf("x           =  | %0.1f  |   y          =  | %0.1f  |\n",x,y);
	printf("               -------                    -------\n");
	printf("               -------                    -------\n");
	printf("sum         =  | %0.1f  |   Difference =  | %0.1f  |\n",(x+y),(x-y));
	printf("               -------                    -------\n");
	printf("               -------                    -------\n");
	printf("Product     =  | %0.1f  |   Division   =  | %0.1f  |\n",(x*y),(x/y));
	printf("               -------                    -------\n");
}