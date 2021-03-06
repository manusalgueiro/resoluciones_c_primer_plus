#include <stdio.h>
#include <stdlib.h>
#define LEN 8

int main(void)
{
    int num_list[LEN],
        product = 1;

    for (int counter = 0; counter < LEN; counter++)
    {
        for (int power = 0; power < counter; power++)
        {
            product *= 2;
        }
        num_list[counter] = product;
        product = 1;
    }

    for (int counter = 0; counter < LEN; counter++)
    {
        printf("%d ", num_list[counter]);
    }
    return 0;
}
