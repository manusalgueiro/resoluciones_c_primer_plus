#include <stdio.h>
#define MESSAGE1 "Enter the second operand "
#define MESSAGE2 "Enter the first operand "

int read_number(char msg[30]);

int main(void)
{
    int first_operand = 0,
        second_operand = 0,
        answer = 0;

    first_operand = read_number(MESSAGE2);
    second_operand = read_number(MESSAGE1);
    while (first_operand != 0)
    {
        answer = first_operand % second_operand;
        printf("%d %% %d = %d\n",
                first_operand, second_operand, answer);
        first_operand = read_number(MESSAGE2);
    }
    return 0;
}

int read_number(char msg[30])
{
    int number = 0;

    printf("%s", msg);
    scanf("%d", &number);

    return number;
}
