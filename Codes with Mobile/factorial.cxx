#include<stdio.h>
void main()
{
	int a,b=1;
	printf ("enter value of a:-");
	scanf ("%d",&a);
	while(a>0)
	{
	    b*=a;
	    a--;
	    }
	    printf ("a! is =%d",b);
}