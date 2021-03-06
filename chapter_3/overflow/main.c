#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

int main(void)
{
    int max_integer = INT_MAX;
    float max_float = FLT_MAX;

    printf("Maximum signed short integer value: %d\n", max_integer);
    printf("Maximum floating point value: %.2e\n", max_float);
    printf("If we add 1 to each value...\n");
    printf("Maximum signed short integer value + 1: %d\n", max_integer + 1);
    printf("Maximum floating point value * 100: %.2e\n", max_float * 100);
    return 0;
}
