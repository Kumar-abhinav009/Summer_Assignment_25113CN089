#include <stdio.h>

int main()
{
    int num, originalNum, reversedNum = 0, digit;

    // Read a number from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Store the original number for comparison later
    originalNum = num;

    // Reverse the number
    while (num != 0)
    {
        // Extract the last digit
        digit = num % 10;

        // Build the reversed number
        reversedNum = reversedNum * 10 + digit;

        // Remove the last digit from the original number
        num = num / 10;
    }

    // Check if original and reversed numbers are equal
    if (originalNum == reversedNum)
    {
        printf("%d is a Palindrome Number.", originalNum);
    }
    else
    {
        printf("%d is Not a Palindrome Number.", originalNum);
    }

    return 0;
}