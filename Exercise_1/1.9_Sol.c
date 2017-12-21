#include<stdio.h>

void main()
{
	double c,f;
	int ch,flag=0;
	while(1)
	{
		printf("1.Celsius to Fahrenheit\n2.Fahrenheit to Celsius\n3.Exit\n");
		printf("Enter your choice: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
			printf("Enter temperature into Celsius: ");
			scanf("%lf",&c);
			f = 9*c/5+32;
			printf("Fahrenheit = %lf",f);
			break;

			case 2:
			printf("Enter temperature into Fahrenheit: ");
			scanf("%lf",&f);
			c = (f-32)*5/9;
			printf("Celsius = %lf",c);
			break;

			case 3:
			flag++;
			break;
		}	
		if(flag == 1)
			break;
	}
	
	

}