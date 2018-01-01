/*
Write a program to compute the value of Euler’s number e, that is used as the base of natural logarithms. Use the following formula.
e=1+1/1!+1/2!+1/3!+…………………………………+1/n!
use a suitable loop construct. The loop must terminate when the difference between two successive values of e is less than 0.00001.
*/
#include<stdio.h>
#include<conio.h>
float factorial(float i)
{
    float fact=1;
    int k;
    for(k=1;k<=i;k++)
        fact=fact*k;
    return(fact);
}
void main()
{
    float e,a,b,dif=1,temp;
    int i,j,k;

    e=1;i=2;b=1;

    while(dif>=0.00001)
    {
        temp=factorial(i);
        a=1/temp;
        e=e+a;
        dif=b-a;
        if(dif>=0.00001)
        b=a;
        i++;
    }
    printf("\n\nthe result = %f",e);
    getch();
}
