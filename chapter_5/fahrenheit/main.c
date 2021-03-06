// fahrenheit.c - A program that inputs temperature in F and returns F, C and K
#include <stdio.h>

double read_temperature(void);
double convert_to_celcius(double temp_fahr);
double convert_to_kelvin(double temp_celcius);
void temperatures(double temp_fahr);

int main(void)
{
    double temp_fahrenheit = 0;

    temp_fahrenheit = read_temperature();
    temperatures(temp_fahrenheit);

    return 0;
}

double read_temperature(void)
{
    double temp = 0;

    printf("Enter the temperature in Fahrenheit: ");
    scanf("%lf", &temp);

    return temp;
}

double convert_to_celcius(double temp_fahr)
{
    double temp_celcius = 0;

    temp_celcius = (5.0/9.0)*(temp_fahr - 32.0);

    return temp_celcius;
}

double convert_to_kelvin(double temp_celcius)
{
    double temp_kelvin = 0;

    temp_kelvin = temp_celcius + 273.0;

    return temp_kelvin;
}

void temperatures(double temp_fahr)
{
    double temp_celc = 0;
    double temp_kelv = 0;

    temp_celc = convert_to_celcius(temp_fahr);
    temp_kelv = convert_to_kelvin(temp_celc);

    printf("%.2lf degrees Fahrenheit is...\n", temp_fahr);
    printf("%.2lf degrees Celcius\n", temp_celc);
    printf("and %.2lf Kelvin", temp_kelv);
}
