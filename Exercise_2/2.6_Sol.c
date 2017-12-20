#include<stdio.h>

void main()
{
	int a[10],i=0,n,po=0,ne=0;
	printf("Enter numbers. Enter 0 to stop.");
	while(1)
	{
		scanf("%d",&a[i]);
		if(a[i] == 0)
			break;
		else
			i++;
	}
	n = i;
	for(i=0;i<n;i++)
	{
		if(a[i]>0)
			po++;
		else
			ne++;
	}
	printf("You entered %d positive and %d negative numbers\n",po,ne);
}