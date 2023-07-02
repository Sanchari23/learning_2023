#include <stdio.h>

void findSmallestLargestDigits(int number)
{
    if (number < 10)
    {
        printf("Invalid\n");
        return;
    }

    int smallestDigit = 9;
    int largestDigit = 0;

    int numCopy = numbe r;

    while (numCopy != 0)
    {
        int digit = numCopy % 10;
        numCopy /= 10;

        if (digit < smallestDigit)
            smallestDigit = digit;

        if (digit > largestDigit)
            largestDigit = digit;
    }

    printf("Smallest Digit: %d\n", smallestDigit);
    printf("Largest Digit: %d\n", largestDigit);
}

int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    findSmallestLargestDigits(number);

    return 0;
}