#include <stdio.h>

int main(void)
{
    int count, sum, limit;

    count = 1;
    sum = 0;

    printf("Enter number of days: ");
    scanf("%d", &limit);

    while (count++ < limit)
    {
        sum = sum + count*count;
    }

    printf("sum = %d\n", sum);
    return 0;
}
