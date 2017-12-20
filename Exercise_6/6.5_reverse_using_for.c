/*write a program using FOR loop
to reverse the number 12345 should be 54321 */
#include<stdio.h>
#include<conio.h>
void main()
{
    int no,n,remainder,reverse=0;
    printf("Enter the no for reverse");
    scanf("%d",&no);
    n=no;  //copy value in other variable
    for(;no>0;no/=10)
    {
        remainder=no%10;
        reverse=reverse*10+remainder;
    }
    printf("Revrse n of %d is %d",n,reverse);
}
