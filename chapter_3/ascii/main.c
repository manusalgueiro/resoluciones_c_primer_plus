#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    unsigned short int code = 0;

    printf("Enter an ASCII code: ");
    scanf("%hu", &code);
    fflush(stdin);
    printf("%d represents the character %c",
           code, code);
    return 0;
}
