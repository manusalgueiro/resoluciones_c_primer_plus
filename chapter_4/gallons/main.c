#include <stdio.h>
#include <stdlib.h>
#define GALT 3.785 // one gallon in liters
#define MIKM 1.609 // one mile in kilometers

int main(void)
{
    float miles = 0,
          gallons = 0,
          liters = 0,
          kilometers = 0,
          mile_per_gallon = 0,
          lt_per_100km = 0;

    // enter the number of miles traveled
    printf("Enter the number of miles traveled: ");
    scanf("%f", &miles);

    // number of gallons of gasoline consumed
    printf("Enter the number of gallones consumed: ");
    scanf("%f", &gallons);

    // Convert mille-per-gallon to liters-per-100-km
    mile_per_gallon = miles/gallons;
    liters = gallons * GALT;
    kilometers = miles * MIKM;

    lt_per_100km = 100 * liters/kilometers;

    printf("A car consuming %.2f gallons per mile"
           " equals %.2f liters per 100 kilometers",
           mile_per_gallon, lt_per_100km);
    return 0;
}
