#include<stdio.h>
void main()
{
	int x,y ,result=1;
	printf("enter values:-");
	scanf ("%d,%d",&x,&y);
	int i=1;
	while(i<=y)
	{
	    result*=x;
	    i++;
	    }
	    printf("%d to the power %d is =%d\n",x,y,result);
}