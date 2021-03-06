#include <stdio.h>
#include <stdlib.h>
#define DUNBAR 150

int main(void)
{
    int n_week = 1,
        n_initial_users = 0,
        n_users = 0;

    printf("Enter the initial number of users: ");
    scanf("%d", &n_initial_users);
    n_users = n_initial_users;

    while (n_users < DUNBAR)
    {
        n_users -= n_week;
        n_users *= 2;
        n_week++;
    }
    printf("It takes %d weeks to reach %d users.\n",
           n_week, DUNBAR);
    return 0;
}
