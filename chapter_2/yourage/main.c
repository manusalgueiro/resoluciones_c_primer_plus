#include <stdio.h>
#define NDAYS 365

int main(void)
{
    int age = 36;
    int days = 0;

    days = NDAYS * age;
    printf("Your are %d years old.\n", age);
    printf("So, you have lived %d days.\n", days);

    return 0;
}
