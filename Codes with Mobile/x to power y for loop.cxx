#include<stdio.h>
void main()
{
	int x,y ;
	long long result=1;
	printf("enter base (x):-");
	scanf ("%d",&x);
	printf ("enter exponent (y):-");
	scanf ("%d",&y);
	for(int i=1; i<=y; i++)
	{
	    result*=x;
	    }
	    printf("%d to the power %d is =%lld\n",x,y,result);
}