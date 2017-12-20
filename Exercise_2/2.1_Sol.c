#include <stdio.h>

void main()
{
	float prod=0,i,n;
	printf("Enter n: ");
	scanf("%f",&n);
	for(i=1;i<=n;i=i+1)
	{
		prod = prod + (1/i);
	}
	printf("The sum of series 1 + 1/2 + 1/3 +....+ 1/n is: %0.2f",prod);
}