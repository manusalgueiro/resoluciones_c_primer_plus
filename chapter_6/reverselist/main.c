#include <stdio.h>
#include <stdlib.h>
#define LENGTH 8

int main(void)
{
    int int_list[LENGTH];

    printf("Enter an array of %d elements:\n", LENGTH);
    for (int counter = 0; counter < LENGTH; counter++)
    {
        printf("Enter the %d th number: ", counter + 1);
        scanf("%d", &int_list[counter]);
    }

    for (int counter = LENGTH - 1; counter >= 0; counter--)
    {
        printf("%d ", int_list[counter]);
    }
    return 0;
}
