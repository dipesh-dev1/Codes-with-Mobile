#include <stdio.h>
#include <ctype.h>

void main() 
{
    char line[1000];
    int digits = 0, uppercase = 0, lowercase = 0;

    // Read a line of text
    printf("Enter a line of text: ");
    fgets(line, sizeof(line), stdin);

    // Count digits, uppercase, and lowercase characters
    for (int i = 0; line[i] != '\0'; i++)
     {
        if (isdigit(line[i])) 
        {
            digits++;      // Count digits
        } else if (isupper(line[i])) 
        {
            uppercase++;   // Count uppercase characters
        } else if (islower(line[i])) 
        {
            lowercase++;   // Count lowercase characters
        }
    }

    // Output the results
    printf("Number of digits: %d\n", digits);
    printf("Number of uppercase characters: %d\n", uppercase);
    printf("Number of lowercase characters: %d\n", lowercase);

    
}