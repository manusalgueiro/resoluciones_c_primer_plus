// Write a program that asks for an integer and then prints all the
// integers from (and including) that value up to (and including) a
// value larger by 10.

#include <stdio.h>
#include <stdlib.h>
#define LIMIT 10

int main(void)
{
    int num_inf = 0,
        num_sup = 0,
        counter = 0;

    printf("Enter the starting value of the list: ");
    scanf("%d", &num_inf);

    counter = num_inf;
    num_sup = num_inf + LIMIT;

    while (counter <= num_sup)
    {
        printf("%d ", counter++);
    }
    return 0;
}
