#include<stdio.h>
void main()
{
	int a,b;
	printf("\nenter the date to convert : \n");
	scanf("%d",&a);
	b=a/1000;
	printf("\n1000  : %d\n",b);
	b=a/500;
	printf("\n500 : %d\n",b);
	b=a/100;
	printf("\n100 : %d\n",b);
	b=a/50;
	printf("\n50 : %d\n",b);
	b=a/20;
	printf("\n20 : %d\n",b);
	b=a/10;
	printf("\n10 : %d\n",b);
	b=a/5;
	printf("\n5 : %d\n",b);
}