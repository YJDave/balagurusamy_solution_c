/* For a certain electrical circuit with an inductance L and resistance R,the
damped natural frequency is given by frequency is
Frequency= sqrt((1/LC)-(R*R)/(4*C*C))
It is desired to study the variation of this frequency with c,write a program to
calculate the frequency for diff values of c starting from .01 to.10(interval is
.01). */

#include<stdio.h>
#include<math.h>
void main()
{
    float f , L , C ,R ;
    float t1 ,t2 ; 
    printf("Enter Inductance, Resistance of the circuit :\n");
    scanf("%f%f",&L,&R);
    printf("Enter Capaticance in range of 0.01 to 0.10 of circuit :\n");
    scanf("%f",&C);
    t1 = (1/(L*C));
    t2 = ((R*R)/(4*C*C)); 
    f = sqrt(t1-t2);
    printf("Frequency of the circuit is : %lf\n" ,f);
}
