/* addemup.c -- five kinds of statements */
#include <stdio.h>

int main(void)                  /* finds sum of first 20 integers */
{
    int count, sum, limit;      /* declaration statement */

    count = 1;                  /* assignment statement */
    sum = 0;                    /* ditto */

    printf("Enter number of days: ");
    scanf("%d", &limit);

    while (count++ < limit)     /* while */
        sum = sum + count;      /* statement */

    printf("sum = %d\n", sum);  /* function statement */

    return 0;                   /* return statement */
}
