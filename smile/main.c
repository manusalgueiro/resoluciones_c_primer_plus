#include <stdio.h>

void smile(void);

int main(void)
{
    /* Smile! x 3 */
    smile();
    smile();
    smile();
    printf("\n");

    /* Smile x 2 */
    smile();
    smile();
    printf("\n");

    /* Last Smile! */
    smile();

    return 0;
}

void smile(void)
{
    printf("Smile!");
}
