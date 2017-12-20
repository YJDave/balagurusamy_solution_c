/*The factorial of an integer m is product of consecutive
integer from1 to m.That is, Factorial m=m!=m*(m-1)..2*1
write the program to compute and print a table of
factorials for any m. */
#include<stdio.h>
#include<conio.h>
int factorial(int);
void main()
{
    int no,fact;
    printf("Enter any number for find factorial");
    scanf("%d",&no);
    fact=factorial(no);
    printf("Factorial of %d is %d",no,fact);
}
int factorial(int no)
{
    int i;
    if(no<2)
    {
        return 1;
    }
    else
    {
        return (no*factorial(no-1));
    }
}
