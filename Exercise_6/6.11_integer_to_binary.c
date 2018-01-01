/*Write a program that will read a positive integer and
determine and print its binary equivalant. */
#include<stdio.h>
#include<conio.h>
void main()
{
    int a[10],num,i;

    printf("Enter the number to convert: ");
    scanf("%d",&num);

    for(i=0;num>0;i++)
    {
        a[i]=num%2;  //for store remainder
        num=num/2;
    }
    printf("\nBinary of Given Number is=");
    for(i=i-1;i>=0;i--)
    {
    printf("%d",a[i]);
    }
}
