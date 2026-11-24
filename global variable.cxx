#include<stdio.h>
int x=8;
void myfunction()
{
    printf("global variable value : %d\n",x);
}
void main()
    {
        myfunction ();
        printf("value of x : %d",x);
    }