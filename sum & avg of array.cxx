//2. WAP to sum and average of all the elements of array.//
#include<stdio.h>
void main()
{
	int sum=0,i,a[5]={2,3,4,5,6};
	float avg;
	for(i=0; i<5; i++)
	{
	sum+=a[i];
	}
	
	avg=sum/5;
	
	printf("sum : %d avg : %.2f",sum,avg);
}