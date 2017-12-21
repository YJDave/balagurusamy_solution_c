/* Given an integer number, write a program that displays the number as follows:
First line: all digits
Second line: all except first digit
Third line: all except first two digits
…………
Last line: The last digit
For example the number 5678 will be displayed as:
5 6 7 8
6 7 8
7 8
8  */

#include<stdio.h>
void main()
{
    int n , num , m , i , d = 1;
    printf("Enter number of digits:");
    scanf("%d",&num);
	printf("Enter the number:");
    scanf("%d",&m);
    n = num ;
    while(num != 0)
    {
        d = 10 * d ;
        num--;
    }
    for(i = 1 ; i <= n ;i++)
    {
        m = m % d;
        d = d / 10 ;
        printf("%d\n",m);
    }    
}

