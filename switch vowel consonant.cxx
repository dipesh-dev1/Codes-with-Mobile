#include<stdio.h>
void main()
{
    char c;
    printf("enter your choice : ");
    scanf("%c",&c);
    switch (c)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    printf("vowel");
    break;
    default:
    if((c>='a')&&(c<='z')||(c>='A')&&(c<='Z'))
    {
        printf("consonat");
    }
     else
     {
     printf("check your choice");
    }
    }}