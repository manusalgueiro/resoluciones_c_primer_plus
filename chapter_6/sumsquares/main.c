#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int status = 0, // input status
        lower = 0,  // lower limit
        upper = 0,  // upper limit
        count = 0,  // counter
        sum = 0,    // sum of integers
        temp = 0;   // temp variable for lower

    printf("Enter lower and upper integer values"
           "(q to quit): ");
    status = scanf("%d %d", &lower, &upper);

    while (status == 2)
    {   temp = lower;
        for (count = lower; count <= upper; count++)
        {
            sum += lower*lower;
            lower++;
        }
        printf("The sums of the squares from %d to %d is %d\n",
               temp*temp, upper*upper, sum);
        printf("Enter lower and upper integer values"
           "(q to quit): ");
        status = scanf("%d %d", &lower, &upper);
    }

    return 0;
}
