#include<stdio.h>
void main()
{
	int a,b=1;
	printf ("enter value of a:-");
	scanf("%d",&a);
	for(int i=1; i<=a; a--)
	b*=a;
	printf("a! is =%d\n",b);
}