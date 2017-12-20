#include <stdio.h>

void main()
{
	float pr,ps;
	printf("Enter the prices of rice and sugar: ");
	scanf("%f%f",&pr,&ps);
	printf("Item     Price\n");
	printf("Rice     Rs.%0.2f\n",pr);
	printf("Sugar    Rs.%0.2f\n",ps);
}
	