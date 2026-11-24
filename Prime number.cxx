#include<stdio.h>
void main()
{
	int a=5,i=2,temp=0;
	while(a>i)
{
    if(a%i==0)
    {
        temp++;
        break;
        }
        i++;
    }
    if(temp==0)
    printf("Prime number ");
    else
    printf ("Not Prime number");
    }