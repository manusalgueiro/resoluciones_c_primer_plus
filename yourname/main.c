#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char name[10] = "John";
    char last_name[10] = "Doe";

    // print full name in one line
    printf("%s %s\n", name, last_name);

    // Print name and lastname in two separate lines
    printf("%s\n%s\n", name, last_name);

    // Print name and lastname in one line with a call
    // to printf for each variable
    printf("%s ", name);
    printf("%s\n", last_name);

    return 0;
}
