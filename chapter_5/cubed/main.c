//Write a program that requests a type double number and prints
//the value of the number cubed. Use a function of your own design
//to cube the value and print it. The main() program should pass
//the entered value to this function.

#include <stdio.h>
#include <stdlib.h>

double get_cubed_number(double number);

int main(void)
{
    double number = 0;

    printf("Enter a number: ");
    scanf("%lf", &number);
    printf("The cube of %.2lf is %.2lf",
           number, get_cubed_number(number));
    return 0;
}

double get_cubed_number(double number)
{
    double cube = 1;

    cube = number*number*number;
    return cube;
}
