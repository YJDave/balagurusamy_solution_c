/*Write a program using a for and if statement to display the capital letter S
  in a grid of 25 row and 18 columns.
*/
#include<stdio.h>
#include<conio.h>
void main()
{


    int row,col,i,j,k;

    row=15;

    col=18;

    for(i=1;i<=row;i++)

    {

        if((i<=3)||(i>=7&&i<=9)||(i>=13&&i<=15))

        {

            for(j=1;j<=col;j++)

                printf("*");

            printf("\n");

        }

        else if(i>=4&&i<=6)

        {

            for(j=1;j<=4;j++)

                printf("*");

            printf("\n");

        }

        else

        {

            for(j=1;j<=13;j++)

                printf(" ");

            for(j=1;j<=4;j++)

                printf("*");

            printf("\n");

        }

    }

getch();

}
