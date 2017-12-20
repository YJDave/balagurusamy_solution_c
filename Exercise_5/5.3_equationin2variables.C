/*5.3 - A set of two linear equations with two unknowns x1 and x2
  are given : ax1 + bx2 = m and cx1 + dx2 = n
  Set has a unique solution
  x1 = (md-bn)/(ad-cb)
  x2 = (na-mc)/(ad-cb) provided denominator is not zero.
  WAP that will read the values of a,b,c,d,m,n and compute the values
  of x1 and x2. An appropriate message should be printed if (ad-bc)=0*/
#include<stdio.h>
#include<conio.h>
void main()
{
	float a,b,c,d,m,n;
	float x1,x2;
	clrscr();
	printf("\nFor equations ax1 + bx2 = m and cx1 + dx2 = n ,enter values of a,b,m,c,d,n");
	scanf("%f%f%f%f%f%f",&a,&b,&m,&c,&d,&n);
	if((a*d-c*b)==0)
	printf("\nInvalid values!");
	else
	{
		x1=((m*d)-(b*n))/((a*d)-(c*b));
		x2=((n*a)-(m*c))/((a*d)-(c*b));
		printf("Values of x1 and x2 are %f and %f",x1,x2);
	}
	getch();
}
