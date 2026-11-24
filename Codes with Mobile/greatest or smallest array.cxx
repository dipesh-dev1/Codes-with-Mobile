#include<stdio.h>
void main()
{
	int a[6]={1,2,3,4,5,6},i,greatest,smallest;
	greatest = smallest=a[0];
	for(i=0; i<6; i++)
	{
	    if(a[i]>greatest)
	    {
	  greatest= a[i];
	    }
	    if(a[i]<smallest)
	    {
	   smallest=a[i];
	    }}
	      printf("greatest is: %d\n",greatest);
	     printf ("smallest is : %d",smallest);
	     
}