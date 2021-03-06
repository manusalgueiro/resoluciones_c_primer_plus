#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char word[40];

    printf("Enter a word: ");
    scanf("%s", word);

    for (int chrnum = strlen(word); chrnum >= 0; chrnum--)
    {
        putchar(word[chrnum]);
    }
    return 0;
}
