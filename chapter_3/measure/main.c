#include <stdio.h>
#include <stdlib.h>
#define INCHES_CM 2.54

int main(void)
{
    float measure = 0;

    printf("Enter the number of inches: ");
    scanf("%f", &measure);
    printf("%.2f inches equals %.2f centimeters.\n",
           measure, measure*INCHES_CM);
    return 0;
}
