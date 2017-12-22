/*
Write a program of plotting of two curves using
if..else constructs insted of continue statement.
*/
/*
We take two function of the type
Y1=exp(-a*x)
Y2=exp(-a*x*x/2)
*/
#include<stdio.h>
#include<conio.h>

void main()

{
    int i;
    float a,x,y1,y2;

    a=0.4;
    printf(" Y.....>\n");
    printf("0------------------\n");

    for(x=0;x<5;x+=0.25)
    {
        //take two function
        y1=(int)(50*exp(-a*x)+0.5);
        y2=(int)(50*exp(-a*x*x/2)+0.5);

        if(y1==y2)
        {
            if(x==2.5)
                printf("x|");
            else
                printf(" |");
            for(i=1;i<=(y1-1);++i)
                printf(" ");
            printf("#\n");
        }
        else if(y1>y2)
        {
            if(x==2.5)
                printf("x|");
            else
                printf(" |");
            for(i=1;i<=(y2-1);++i)
                printf(" ");
            printf("*");
            for(i=1;i<=(y1-y2-1);++i);
                printf("-");
            printf("0\n");
        }
        else
        {
            if(x==2.5)
                printf("x|");
            else
                printf(" |");
            for(i=1;i<=(y1-1);++i)
                printf(" ");
            printf("0");
            for(i=1;i<=(y2-y1-1);++i)
                    printf("-");
            printf("*\n");
        }
    }
printf(" |\n");
getch();
}
