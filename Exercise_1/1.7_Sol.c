#include<stdio.h>

void main()
{
	void add(int a, int b);
	void sub(int a, int b);
	add(20,10);
	sub(20,10);
}

void add(int a, int b)
{
	int c = a+b;
	printf("%d + %d = %d\n",a,b,c);
}

void sub(int a, int b)
{
	int c = a-b;
	printf("%d - %d = %d\n",a,b,c);
}