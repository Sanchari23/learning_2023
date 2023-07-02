#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[10]; // Assuming the input string has a maximum length of 10 characters
    printf("Enter a number as a string: ");
    scanf("%s", str);

    int number = atoi(str);

    printf("The converted integer is: %d\n", number);

    return 0;
}
