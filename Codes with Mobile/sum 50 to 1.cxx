#include<stdio.h>
void main ()
{
	int a=50,sum=0;
	printf("numbers from 50 to 1:-");
	while(a>0)
	{
	   printf ("%d\n",a);
	    sum+=a;
	    a--;
	    }
	    printf ("sum is =%d\n",sum);
}