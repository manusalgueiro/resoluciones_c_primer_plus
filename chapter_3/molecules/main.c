#include <stdio.h>
#include <stdlib.h>
#define QUARTS 950 // a quart of water in grams
#define MOLEC_WEIGHT 3e-23 // Molecule weight in grams

int main(void)
{
    int number_of_quarts = 0;
    double number_of_molecules = 0;

    printf("Enter an ammount of water (in quarts): ");
    scanf("%d", &number_of_quarts);

    number_of_molecules = number_of_quarts * QUARTS/MOLEC_WEIGHT;
    __mingw_printf("The number of molecules in this ammount of water is: %.0e\n",
                   number_of_molecules);
    return 0;
}
