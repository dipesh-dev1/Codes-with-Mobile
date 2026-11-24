#include <stdio.h>
void main()
{
    int a, b, c;
    printf("enter numbers:\n");
    scanf("%d%d%d", &a, &b, &c);
    if(a>b)
    {
        if(a>c)
        {
    printf("greater : %d", a);
        }
        else
        {
            printf ("greater : %d",c);
        }}
        else
        {
            if(b>c)
            {
                printf ("greater : %d",b);
            }
            else
            {
                printf("greater : %d",c);
            }}
}