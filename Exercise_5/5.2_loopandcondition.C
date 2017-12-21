/*5.2 - Write a program to find the number of and sum of all integers
 greater than 100 and less than 200 that are divisible by 7*/
#include<conio.h>
#include<stdio.h>
void main()
{
	int i,sum=0,count=0;
	clrscr();
	for(i=101;i<200;i++)
	{
		if(i%7==0)
		{
			sum=sum+i;
			count++;
			printf("%d\n",i);  //Number divisible by 7
		}
		else
		continue;
	}
	printf("\nThere are %d numbers between 100 and 200 that are divisible by 7",count);
	printf("\n The sum of numbers divisibke by 7 is %d",sum);
	getch();
}
