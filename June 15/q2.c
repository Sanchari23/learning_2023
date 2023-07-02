#include <stdio.h>

void printBits(int num)
{
    int i;
    int temp = 1 << 31;

    for (i = 0; i < 32; i++)
    {

        if (num & temp)
            printf("1");
        else
            printf("0");

        temp >>= 1;
    }
}

int main()
{
    int num;

    printf("Enter a 32-bit integer: ");
    scanf("%i", &num);

    printf("Bits of the integer: ");
    printBits(num);
    printf("\n");

    return 0;
}