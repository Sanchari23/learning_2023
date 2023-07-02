#include <stdio.h>

void largestnumber(int n)
{
    int temp;
    int num = n;
    int min = 9999;
    int count = 1;
    int res = 0;
    while (n != 0)
    {
        temp = n % 10;

        if (temp < min)
        {
            min = temp;
            res = count;
        }
        count = count * 10;
        n = n / 10;
    }
    min = min * res;
    ;
    printf("The largest number after removing 1 digit is : %d", num - min);
}

int main()
{
    int n;
    printf("Enter the 4 digit number :");
    scanf("%d", &n);
    largestnumber(n);
}