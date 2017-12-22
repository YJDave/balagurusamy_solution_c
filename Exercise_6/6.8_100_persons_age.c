/*write a program to print to read the age of 100 persons and count the number of persons in the age group 50 and 60.
use  for and continue statements */
#include<stdio.h>
#include<conio.h>
void main()
{
    int i,age,count=0,r;

    for(i=1; i<=5; i++)
    {
        printf("Enter the age of the person");
        scanf("%d", &age); //take age of persons

        if(age>=50 && age<=60) //rang of age
        {
            count++;
        }
        else
        {
            continue;
        }
    }
    printf("No of persons in hte age group 50 to 60: %d",c);
getch();

}
