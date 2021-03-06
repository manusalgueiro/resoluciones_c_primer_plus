#include <stdio.h>
#include <stdlib.h>
#define ONE_WEEK 7

int main(void)
{
    int total_days = 1,
        weeks = 0,
        remaining_days = 0;

    while (total_days > 0)
    {
        printf("Enter the number of days: ");
        scanf("%d", &total_days);

        weeks = total_days / ONE_WEEK;
        remaining_days = total_days % ONE_WEEK;

        printf("%d days equals %d weeks and %d days.\n",
               total_days, weeks, remaining_days);
    }
    return 0;
}
