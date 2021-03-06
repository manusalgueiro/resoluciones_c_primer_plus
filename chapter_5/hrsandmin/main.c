// Write a program that converts time in minutes
// to time in hours and minutes.

#include <stdio.h>
#include <stdlib.h>
#define HR_MIN 60

int main(void)
{
    int time_in_minutes = 1,
        minutes = 0,
        hours = 0;

    while (time_in_minutes > 0)
    {
        printf("Enter the time in minutes"
               " (0 or less exits the program): ");
        scanf("%d", &time_in_minutes);

        hours = time_in_minutes / HR_MIN;
        minutes = time_in_minutes % HR_MIN;
        printf("%d minutes equals %d hours and %d minutes\n",
               time_in_minutes, hours, minutes);
    }
    return 0;
}
