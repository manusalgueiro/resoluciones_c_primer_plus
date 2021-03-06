#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char name_1[30],
         name_2[30];

    int length_1 = 0,
        length_2 = 0;

    printf("Enter two names:\n");
    printf("One name: ");
    scanf("%s", name_1);

    printf("Another name: ");
    scanf("%s", name_2);

    length_1 = strlen(name_1);
    length_2 = strlen(name_2);

    // Numbers right-aligned
    printf("%s %s\n", name_1, name_2);
    printf("%*d %*d\n",
           length_1, length_1, length_2, length_2);

    // Numbers left-aligned
    printf("%s %s\n", name_1, name_2);
    printf("%-*d %-*d\n",
           length_1, length_1, length_2, length_2);
    return 0;
}
