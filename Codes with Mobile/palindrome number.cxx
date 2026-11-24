//PALINDROME NUMBER 

#include <stdio.h>
void main() 
{
    int num, originalNum, reversedNum = 0, remainder;

    // Taking input
    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num; // Storing the original number for comparison

    // Reversing the number
    while (num>0) 
    {
        remainder = num % 10;                  // Extracting the last digit
        reversedNum = reversedNum * 10 + remainder; // Building the reversed number
        num /= 10;                             // Removing the last digit
    }

    // Checking if the original number is equal to its reverse
    if (reversedNum== originalNum )
        printf("%d is a Palindrome Number.\n", originalNum);
    else
        printf("%d is not a Palindrome Number.\n", originalNum);

   
}