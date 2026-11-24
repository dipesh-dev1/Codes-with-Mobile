#include<stdio.h>
void main()
{
	int a,i=2,b=0;
	printf("enter num\n");
	scanf("%d",&a);
	while(a>i)
	{
	    if(a%i==0)
	    {
	    b++;
	    break;
	    }
	    i++;
	}
	    
	        if(b==0)
	        printf ("Prime\n");
	        else
	        printf ("not prime");
}