/* This program outputs a letter pyramid with a base letter
    entered by the user. */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void)
{
    const char FRST_LT = 'A';   // First letter
    char base_letter = '\0';    // Base of the pyramid
    int num_rows = 0;           // Number of rows
    //int base_len = 0;           // Pyramid base length
    int num_spc = 0;            // Number of spaces before letters

    int spc = 0;    // Spaces counter
    int lt_asc = 0; // Letter counter ascending
    int lt_dsc = 0; // Letter counter descending

    do
    {
        printf("Enter an upcase letter: ");
        scanf("%c", &base_letter);
        base_letter = toupper(base_letter); // in case of entering a downcase letter

        if (base_letter < 65 || base_letter > 90)
        {
            printf("Error.Please try again.\n");
        }
    } while (base_letter < 65 || base_letter > 90);

    printf("You entered the letter %c", base_letter);

    /*      A
           ABA
          ABCBA
         ABCDCBA
        ABCDEDCBA

    Cuando fue ingresado 'E'
    */

    /* Number of rows == Number of spaces before letters */
    num_spc = base_letter - FRST_LT;
    num_rows = num_spc;
    //base_len = (num_spc)*2 + 1;

    for (int row = 0; row < num_rows; row++)
    {
        /* handling spaces */
        for (spc = 0; spc < num_spc; spc++)
        {
            putchar(' ');
        }
        /* printing letters in ascending order */
        for (lt_asc = spc; lt_asc <= (row + spc); lt_asc++)
        {
            putchar(FRST_LT + lt_asc - spc);
        }
        /* printing letters in descending order */
        for (lt_dsc = lt_asc; lt_dsc >= 0; lt_dsc--)
        {
            putchar(FRST_LT + lt_dsc - lt_asc);
        }
    }
    return 0;
}
