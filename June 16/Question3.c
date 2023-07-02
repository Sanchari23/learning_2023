#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int Computesecond(char str[])
{
    int hours, minutes, seconds, totaltime;

    hours = atoi(str);
    minutes = atoi(str + 2);
    seconds = atoi(str + 5);
    printf("%d\n", hours);
    printf("%d\n", minutes);
    printf("%d\n", seconds);

    totaltime = hours * 3600 + minutes * 60 + seconds;

    return totaltime;
}

int main()
{
    char str[9];
    int totalSeconds = 0;
    printf("Enter the time in hh:mm:ss format: ");
    scanf("%s", str);
    totalSeconds = Computesecond(str);
    printf("Total seconds: %d\n", totalSeconds);

    return 0;
}