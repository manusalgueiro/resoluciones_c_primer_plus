#include <stdio.h>
#include <stdlib.h>
#define LEN 8

int main(void)
{
    int num_list[LEN];
    int accum_list[LEN];
    int sum = 0;

    for (int counter = 0; counter < LEN; counter++)
    {
        printf("Enter an integer value: ");
        scanf("%d", &num_list[counter]);
        sum = 0;
        for (int inner_counter = 0; inner_counter < counter; inner_counter++)
        {
            sum += num_list[inner_counter];
        }
        accum_list[counter] = sum;
    }

    for (int count = 0; count < LEN; count++)
    {
        printf("%d\t", num_list[count]);
    }
    printf("\n");
    for (int count = 0; count < LEN; count++)
    {
        printf("%d\t", accum_list[count]);
    }
    return 0;
}
