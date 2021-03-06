#include <stdio.h>
#include <stdlib.h>
#define SECONDS 3.156e7
int main(void)
{
    int age = 0;

    printf("Enter your age: ");
    scanf("%u", &age);
    __mingw_printf("Your age in seconds is: %.0lf seconds.\n",
                   SECONDS * age);
    return 0;
}
