/* Using nested loops to produce the
    following pattern:

    $
    $$
    $$$
    $$$$
    $$$$$

*/
#include <stdio.h>
#include <stdlib.h>
#define NUM 5 // Number of symbols/lines

int main(void)
{
    for (int lines = 0; lines < NUM; lines++)
    {
        for (int symb = 0; symb <= lines; symb++)
        {
            putchar('$');
        }
        putchar('\n');
    }
    return 0;
}
