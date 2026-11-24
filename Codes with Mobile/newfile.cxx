//1. WAP to enter values in array called myarray of size 15 and display the elements of array.//
#include<stdio.h>
void main()
{
	int i,myArray[15];
	printf("Enter 15 values of myArrray:-\n");
	for(i=0; i<15; i++)
	{
	printf ("Value : ",i+1);
	scanf("%d",&myArray[i]);
	}
	{
	    printf ("The elements of array are:-\n");
	    for(i=0; i<15; i++)
	printf ("myarray : %d\n",myArray[i]);
	}
}