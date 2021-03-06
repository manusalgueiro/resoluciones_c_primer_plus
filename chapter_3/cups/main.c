#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float   cups = 0,
            pints = 0,
            ounces = 0,
            tablespoons = 0,
            teaspoons = 0;

    printf("Enter a volume in cups: ");
    scanf("%f", &cups);

    pints = 0.5 * cups;
    ounces = cups * 8;
    tablespoons = ounces * 2;
    teaspoons = tablespoons * 3;

    printf("%.2f cups is %.2f pints\n", cups, pints);
    printf("%.2f cups is %.2f ounces\n", cups, ounces);
    printf("%.2f cups is %.2f tablespoons\n", cups, tablespoons);
    printf("%.2f cups is %.2f teaspoons\n", cups, teaspoons);

    return 0;
}
