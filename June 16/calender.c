#include <stdio.h>

// Function to check if a year is a leap year
int isLeapYear(int year)
{
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    {
        return 1; // Leap year
    }
    else
    {
        return 0; // Not a leap year
    }
}

// Function to calculate the number of days in a given month of a year
int getDaysInMonth(int month, int year)
{
    int daysInMonth;

    switch (month)
    {
    case 1:  // January
    case 3:  // March
    case 5:  // May
    case 7:  // July
    case 8:  // August
    case 10: // October
    case 12: // December
        daysInMonth = 31;
        break;

    case 4:  // April
    case 6:  // June
    case 9:  // September
    case 11: // November
        daysInMonth = 30;
        break;

    case 2: // February
        if (isLeapYear(year))
        {
            daysInMonth = 29;
        }
        else
        {
            daysInMonth = 28;
        }
        break;

    default:
        daysInMonth = -1; // Invalid month
    }

    return daysInMonth;
}

// Function to calculate the number of days elapsed between two dates
int getDaysElapsed(int day1, int month1, int year1, int day2, int month2, int year2)
{
    int days = 0;

    // Count the number of days in the first year
    for (int month = month1 + 1; month <= 12; month++)
    {
        days += getDaysInMonth(month, year1);
    }
    days += getDaysInMonth(month1, year1) - day1;

    // Count the number of days in the intermediate years
    for (int year = year1 + 1; year < year2; year++)
    {
        if (isLeapYear(year))
        {
            days += 366;
        }
        else
        {
            days += 365;
        }
    }

    // Count the number of days in the last year
    for (int month = 1; month < month2; month++)
    {
        days += getDaysInMonth(month, year2);
    }
    days += day2;

    return days;
}

int main()
{
    int day1, month1, year1;
    int day2, month2, year2;

    printf("Enter the first date (day month year): ");
    scanf("%d %d %d", &day1, &month1, &year1);

    printf("Enter the second date (day month year): ");
    scanf("%d %d %d", &day2, &month2, &year2);

    int daysElapsed = getDaysElapsed(day1, month1, year1, day2, month2, year2);
    printf("Number of days elapsed: %d\n", daysElapsed);

    return 0;
}
