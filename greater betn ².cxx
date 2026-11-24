#include<stdio.h>
void main()
{
	int a,b,c;
	printf ("enter numbers:\n");
	scanf("%d%d",&a,&b);
	c=(a>b)?a:b;
	printf ("greater : %d",c);
}