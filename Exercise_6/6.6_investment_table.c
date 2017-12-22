/* Write a program to evalute the following investment equation
V=P(1+r)^n
and print the tables which would give the value of V for various combination of the following values of P,r and n.
P: 1000,2000,...10,000
r: 0.10,0.11,...0.20
n: 1,2,...10
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    float P,r,i,investment;
    int n;
    P=1000;
    r=0.10;
    n=1;
    printf("Principal_amount\tvalue_of_money\tyear\tInvestment\n\n");
    for(i=1;i<=10;i++)
    {
        investment=P*pow((1+r),n);
        printf("%.2f\t\t%.2f\t\t%d\t%.2f\n",P,r,n,investment);
        P=P+1000;
        r=r+0.01;
        n=n+1;
    }
}
