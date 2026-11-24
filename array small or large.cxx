#include<stdio.h>
void main()
{
	int i, small, large, a[5]={2,5,7,8,4};
	small=large=a[0];
	for(i=0; i<=5; i++)
	{
	    if(a[i]<small)
	    small=a[i];
	    if(a[i]>large)
	    large=a[i];
	    }
	    printf("small=%d and large=%d",small,large);
}
