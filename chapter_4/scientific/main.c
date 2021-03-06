#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    double number = 0;

    printf("Enter a floating point number: ");
    scanf("%lf", &number);

    printf("The input is %.1f or %.1e.\n", number, number);
    printf("The input is %+.1f or %+.1E.\n", number, number);
    return 0;
}
