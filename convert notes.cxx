#include<stdio.h>
void main()
{
	int a,b,c;
	printf("\nenter the date to convert : \n");
	scanf("%d",&a);
	b=a/1000;
	printf("\n1000  : %d\n",b);
	c=a%1000;
	b=c/500;
	printf("\n500 : %d\n",b);
	c=c%500;
	b=c/100;
	printf("\n100 : %d\n",b);
	c=c%100;
	b=c/50;
	printf("\n50 : %d\n",b);
	c=c%50;
	b=c/20;
	printf("\n20 : %d\n",b);
	c=c%20;
	b=c/10;
	printf("\n10 : %d\n",b);
	c=c%10;
	b=c/5;
	printf("\n5 : %d\n",b);
}