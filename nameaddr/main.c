#include <stdio.h>

int main(void)
{
    char name[20] = "John Doe";
    char street[30] = "Buenavista Avenue";
    int st_number = 3421;

    printf("You are %s.\n", name);
    printf("You live in %s %d.", street, st_number);

    return 0;
}
