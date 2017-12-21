/*5.1 (a) - Write a program to determine whether a given number is odd or even
  and print the message "NUMBER IS EVEN" or "NUMBER IS ODD" without
  else option*/
#include<conio.h>
#include<stdio.h>
void main()
{
	int n;
	clrscr();
	printf("\nEnter the number to be tested.");
	scanf("%d",&n);
	if(n%2==0)
	{
		printf("\nNUMBER IS EVEN");
		goto end;
	}
	printf("\nNUMBER IS ODD");
	end:
	getch();
}