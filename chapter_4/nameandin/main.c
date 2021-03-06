#include <stdio.h>
#include <stdlib.h>
#define FT_TO_INCH 12

int main(void)
{
    char str_name[20];
    float f_height_in = 0;
    float f_height_ft = 0;

    printf("Enter your name and your height (in inches): ");
    scanf("%s %f", str_name, &f_height_in);

    f_height_ft = f_height_in / FT_TO_INCH;

    printf("%s, you are %.3f feet tall.\n", str_name, f_height_ft);
    return 0;
}
