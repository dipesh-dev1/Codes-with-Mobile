#include<stdio.h>
void main()
{
	float sub1,sub2,sub3,sub4,sub5,total,percentage;
	printf("Enter marks :-\n");
	scanf("%f%f%f%f%f",&sub1,&sub2,&sub3,&sub4,&sub5);
	total = sub1+sub2+sub3+sub4+sub5;
	percentage = (total/500)*100;
	printf ("Total = %.2f Percentage = %.2f%%\n",total,percentage);
}