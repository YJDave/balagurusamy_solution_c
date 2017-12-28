/* Write a program to illustrate the use of cast operator
in real life situation */

#include<stdio.h>
void main()
{
    int s , n ;
    float avg ;
    printf("If your average is greater than 33.3 then you are eligible\n");
    printf("Enter sum of your marks and number of subjects:\n");
    scanf("%d%d",&s ,&n); 
    avg = (float)s / n ;
    printf("Your average is %f\n",avg);
}    
