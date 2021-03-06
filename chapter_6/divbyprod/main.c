#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float numa = 0,
          numb = 0;

    int status = 0;

    printf("Enter two floating point numbers (q to quit): ");
    for ( ;(status = scanf("%f %f", &numa, &numb)) == 2; )
    {
        printf("%.4f\n", (numa - numb)/(numa * numb));
        printf("Enter two floating point numbers (q to quit): ");
    }
    return 0;
}
