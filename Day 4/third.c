#include <stdio.h>

int main()
{
    int num, temp, digit;
    int sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    while(temp > 0)
    {
        digit = temp % 10;          // Extract last digit
        sum = sum + (digit * digit * digit); // Cube of digit
        temp = temp / 10;           // Remove last digit
    }

    if(sum == num)
        printf("%d is an Armstrong number.", num);
    else
        printf("%d is not an Armstrong number.", num);

    return 0;
}