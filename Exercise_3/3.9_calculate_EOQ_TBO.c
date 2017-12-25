/* In inventory management, the economy order quantity for a single item is given by
EOQ = sqrt((2*dr*sc)/hc)
and the optimal time between orders
TBO= sqrt((2*sc)/(dr*hc))
Write a program to compute EOQ and TBO ,given demand rate ,setup costs,and
the holding cost. */

#include<stdio.h>
#include<math.h>
void main()
{
    float d ,s ,h;
    float TBO,EOQ;
    printf("Enter Demand Rate: \n");
    scanf("%f",&d);
    printf("Enter Setup Cost: \n");
    scanf("%f",&s);
    printf("Enter Holding Cost: \n");
    scanf("%f",&h);
    EOQ=sqrt((2*d*s)/h);
    TBO=sqrt((2*s)/(d*h));
    printf("The Economic Order Quantity is : %f\n",EOQ);
    printf("The time Between Order is : %f\n",TBO);
}

