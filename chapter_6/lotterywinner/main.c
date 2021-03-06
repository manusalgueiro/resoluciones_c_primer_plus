#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    const double EXT_AMM = 100000.00;   // Extraction ammount
    const double PRIZE = 1000000.00;    // Original prize

    double rate = 0.08,                 // interest rate
           deposit = PRIZE;             // initial deposit

    int n_years = 0;                    // number of years

    while (deposit >= EXT_AMM)
    {
        deposit *= 1.00 + rate;
        deposit -= EXT_AMM;
        n_years++;
    }
    printf("Initial prize: $%.2f\n"
           "Withdrawals per year: $%.2f\n", PRIZE, EXT_AMM);

    printf("It will take %d years until this lottery winner "
           "consumes all his funds.\n", n_years);

    printf("Remaining funds: $%.2f\n", deposit);
    return 0;
}
