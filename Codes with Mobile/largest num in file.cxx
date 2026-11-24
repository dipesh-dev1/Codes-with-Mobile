#include<stdio.h>
void main()
{
    FILE *ptr=fopen("largest.txt","w");
    int a,b;
    printf("enter numbers\n");
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        printf("largest is : %d\n",a);
        fprintf(ptr,"largest is : %d\n",a);
    }
    else
    {
    printf("largest is : %d\n",b);
    fprintf(ptr,"largest is : %d\n",b);
}
fclose(ptr);
}