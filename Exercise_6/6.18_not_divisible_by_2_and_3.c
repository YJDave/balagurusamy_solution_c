/*
 Write the program to print all integers that are not divisible by either 2 or 3
 and lie between 1 and 100. Program should also account the number of such integers
 and print the result.*/

#include<stdio.h>
#include<conio.h>
void main()
{
    int i,count;
    count=0;
    for(i=1;i<=100;i++)
    {
        if(i%2!=0&&i%3!=0)
        {
            count++;
            printf("%d\n",i);
        }
    }
    printf("The countable numbers is: %d",count);

}
