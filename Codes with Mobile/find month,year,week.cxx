#include<stdio.h>
void main()
{
	int a,b;
	printf("\nenter the date to convert : \n");
	scanf("%d",&a);
	b=a/365;
	printf("\nyear : %d\n",b);
	b=a/30;
	printf("\nmonths : %d\n",b);
	b=a/7;
	printf("\nweeks : %d\n",b);
}