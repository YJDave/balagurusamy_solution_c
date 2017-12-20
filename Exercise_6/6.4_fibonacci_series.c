/*The number in the sequence
1 1 2 3 5 8 13 21....
are called fibonacci number s.Write a program using
a do...while loop to  calculate and print first n fibonacci
numbers. */
#include<stdio.h>
#include<conio.h>
void main()
{
    int n,f,n1=-1,n2=1;

    printf("  Enter The Number Of Terms:");
    scanf("%d",&n);

    printf("  The Fibonacci Series is:");

    do
    {
        f=n1+n2;
        n1=n2;
        n2=f;
        printf("  \n %d",f);
        n--;
    }while(n>0);
    getch();
}
