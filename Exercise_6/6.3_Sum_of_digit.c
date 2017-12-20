/*Write a progrm to compute the sum of the digit
of a given integer number */
#include<stdio.h>
#include<conio.h>
void main()
{
    int  num, temp, digit, sum = 0;

    printf("Enter the number \n");
    scanf("%d", &num);
    temp = num;
    while (num > 0)
    {
        digit = num % 10;
        sum  = sum + digit;
        num /= 10;
    }
    printf("Given number = %ld\n", temp);
    printf("Sum of the digits %ld = %ld\n", temp, sum);
}
