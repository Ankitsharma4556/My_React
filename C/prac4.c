/*Check Leap Year:
Write a program to check if a given year is a leap year. A year is a leap year if it is divisible by 4 but not by 100, except for years divisible by 400.*/

#include <stdio.h>
int main() {
    int year;

    printf("Enter the year: ");
    scanf("%d", &year);

    if (year % 400 == 0)
    {
        printf("Yes %d is a leap year\n", year);
    }

    else if (year % 4 == 0 && year % 100 != 0)
    {
        printf("Yes %d is a leap year\n", year);
    }

    else {
        printf("No %d is not a leap year\n", year);
    }
    return 0;

    
}