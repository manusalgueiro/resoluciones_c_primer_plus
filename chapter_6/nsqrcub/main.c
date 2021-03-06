#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int status = 0,
        lower = 0,
        upper = 0;

    printf("Enter the lower and upper limits of the list: "
           "(q to quit): ");
    status = scanf("%d %d", &lower, &upper);
    while (status != 2)
    {
        printf("Something went worng. Try again.");
        printf("Enter the lower and upper limits of the list: "
           "(q to quit): ");
        status = scanf("%d %d", &lower, &upper);
    }

    for (int num = lower; num < upper; num++)
    {
        printf("number = %d\tsquare = %d\tcubed = %d\n",
               num, num*num, num*num*num);
    }
    return 0;
}
