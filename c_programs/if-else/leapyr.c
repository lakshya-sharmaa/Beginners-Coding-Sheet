#include <stdio.h>

//  Write a Program to Check whether a year entered by
// user is Leap Year or not

int main(void)
{
    int year;

    printf("Enter the Year: ");
    scanf("%i", &year);

    if ((year % 4 == 0) && ((year % 100 != 0) || (year % 400 == 0)))
    {
        printf("%i is a leap year\n", year);
    }
    else
    {
        printf("%i is not a leap year\n", year);
    }
}