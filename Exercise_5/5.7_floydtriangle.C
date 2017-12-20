/*Admission to a professional course is subject to the following conditions
  (a)Marks in Maths>=60
  (b)Marks in Physics>=50
  (c)Marks in Chemistry>=40
  (d)Total in all 3 subjects>=200 or Total in Maths and Physics>=150
  Given the marks in all 3 subjects, WAP to process the applications
  to list of eligible candidates*/
#include<conio.h>
#include<stdio.h>
void main()
{
	int mm,cm,pm,tm,n,i;
	clrscr();
	printf("\nEnter the no. of students.");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nEnter the marks of maths, physics and chemistry for student %d.",(i+1));
		scanf("%d%d%d",&mm,&pm,&cm);
		tm=mm+pm+cm;
		printf("\nTotal marks=%d",tm);
		if((mm>=60)&&(pm>=50)&&(cm>=40)&&(tm>=200)||(mm+pm>=150))
		{
			printf("\nStudent %d is eligible!",(i+1));
		}
		else
		printf("\nStudent %d is not eligible.",(i+1));
	}
	getch();
}
