#include <stdio.h>
void main() 
{
    char str[100];
    int length = 0;

    // Using gets (unsafe, not recommended)
    printf("Enter a string: ");
    gets(str);  // Unsafe, can cause buffer overflow

    // Loop to count the characters
    while (str[length] != '\0')
     {
        length++;
    }

    // Output the length of the string
    printf("Length of the string is: %d\n", length);

}