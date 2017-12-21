/* Write a program that will read a real number from the keyboard 
and print the following output in one line:
Smallest integer          The given           Largest integer
not less then             number              not greater than
the number                                    the number          */

#include<stdio.h>
void main()
{
    float a;
    int b , c ;
    printf("Enter number:");
    scanf("%f",&a);
    b = a ;
    c = a ;
    printf("Smallest integer not ");
    printf("\t\tThe given no. ");
    printf("\t\t\tLargest integer not \n");
    printf("less than the number ");
    printf("\t\t\t\t\t\tgreater than the no.\n");
    printf("   %d\t\t\t",b);
    printf("\t%f\t\t\t",a);
    printf("   %d\n",c);
}

