#include<stdio.h>
void main()
{
	char alphabet;
	printf("Please enter alphabets:-");
	scanf("%c",&alphabet);
	switch(alphabet)
	{
	    case 'a':
	    case 'e':
	    case 'i':
	    case 'o':
	    case 'u':
	    printf("Vowels \n");
	     break;
	    default:
	              if (alphabet >= 'a' && alphabet <= 'z')
	               {
                printf("Consonant\n");
            } else {
                printf("Invalid input. Please enter an alphabet.\n");
            }
	    }
}