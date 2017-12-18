#include<stdio.h>
//#include<curses.h>

void main()
{
    int x =1 , y = 2 , z = 3 , temp ;
    //clrscr();

    printf("Values of x , y, z is %d %d %d respectively\n" , x,y,z);

    temp = x ;
    x = y ;
    y = z ;
    z = temp ;

    printf("Values of x , y, z after swapping is %d %d %d respectively\n" , x,y,z);

    //getch();
}
