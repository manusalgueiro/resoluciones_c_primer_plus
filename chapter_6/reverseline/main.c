#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LIMIT 255

int main(void)
{
    char line[LIMIT];
    int line_len = 0;

    printf("Enter a line of text (255 characters max): ");
    scanf("%[^\n]", line);

    line_len = strlen(line);
    for (int counter = line_len; counter >= 0; counter--)
    {
        printf("%c", line[counter]);
    }
    return 0;
}
