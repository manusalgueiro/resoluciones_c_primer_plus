#include <stdio.h>
#include <stdlib.h>

float div_by_prod(float number1, float number2);

int main(void)
{
    float numa = 0,
          numb = 0;

    int status = 0;

    printf("Enter two floating point numbers (q to quit): ");
    for ( ;(status = scanf("%f %f", &numa, &numb)) == 2; )
    {
        printf("%.4f\n", div_by_prod(numa, numb));
        printf("Enter two floating point numbers (q to quit): ");
    }
    return 0;
}

float div_by_prod(float number1, float number2)
{
    float ans = 0;

    ans = (number1 - number2)/(number1 * number2);

    return ans;
}
