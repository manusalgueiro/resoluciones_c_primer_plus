/* A program that creates an array of 26 elements and
    stores the 26 lowercase letters in it */
#include <stdio.h>
#include <stdlib.h>
#define NLT 26  /* Number of letters */

int main(void)
{
    char letters[NLT];
    int n = 0;

    while (n < NLT)
    {
        letters[n] = 'a' + n;
        printf("%2d th letter: %c\n",
               n+1, letters[n]);

        n++;
    }
    printf("\n");
    return 0;
}
