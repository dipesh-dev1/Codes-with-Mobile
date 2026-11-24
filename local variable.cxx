#include<stdio.h>
void main()
{
    int x=8;

    printf("local variable value : %d\n",x);
   
    {
        int y=6;
        printf("value of y : %d",y);
    }}