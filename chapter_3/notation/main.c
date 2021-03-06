#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    double number = 0;

    printf("Enter a number: ");
    scanf("%lf", &number);
    fflush(stdin);

    printf("\nDecimal notation: %d\n\n", (int) number);
    printf("Exponential notation : %e\n\n", number);
    __mingw_printf("p notation: %A\n", number);

    return 0;
}
