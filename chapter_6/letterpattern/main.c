/* A program that prints a pattern of upcase letters */

#include <stdio.h>
#include <stdlib.h>
#define FRST_LTTR 'A'
#define LIMIT 6

int main(void)
{
    char letter = FRST_LTTR;

    for (int row = 0; row < LIMIT; row++)
    {
        for (int col = 0; col <= row; col++)
        {
            putchar(letter++);
        }
        putchar('\n');
    }
    return 0;
}
