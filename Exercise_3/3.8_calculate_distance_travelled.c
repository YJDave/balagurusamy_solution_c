/* Distance travelled is given by : 
 Distance = ut + (at^2)2 
Write a program to calculate the distance travelled by at regular
intervals of time ,given the values of u and a. The program 
should be flexible to the user select his own time interval
and repeat the calculation for diff values of u,a.
*/

#include<stdio.h>
void main()
{
    float d , u , t , a ;
    printf("Enter initial velocity, acceleration and time of vehicle:\n");
    scanf("%f%f%f", &u, &a, &t);
    d = (u*t) + (a*(t*t))/2;
    printf("Total distance travelled by vehicle is %f metres.\n" , d);
}

