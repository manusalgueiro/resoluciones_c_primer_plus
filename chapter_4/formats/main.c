#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NAMELEN 50
#define WIDER 3

void print_in_double_quotes(char first[NAMELEN]);
void print_right_end_20(char first[NAMELEN]);
void print_left_end_20(char first[NAMELEN]);
void print_3_wider(char first[NAMELEN]);

int main(void)
{
    char first_name[NAMELEN];

    printf("Enter your first name: ");
    scanf("%s", first_name);

    // Exercise a
    print_in_double_quotes(first_name);

    // Excercise b
    print_right_end_20(first_name);

    // Excercise c
    print_left_end_20(first_name);

    // Excercise d
    print_3_wider(first_name);

    return 0;
}

void print_in_double_quotes(char first[NAMELEN])
{
    printf("Full name enclosed in double quotation marks:\n");
    printf("\"%s\"\n", first);
}

void print_right_end_20(char first[NAMELEN])
{
    printf("Full name enclosed in double quotation marks,"
           " aligned to the right:\n");
    printf("\"%20s\"\n", first);
}

void print_left_end_20(char first[NAMELEN])
{
    printf("Full name enclosed in double quotation marks,"
           " aligned to the left:\n");
    printf("\"%-20s\"\n", first);
}

void print_3_wider(char first[NAMELEN])
{
    unsigned short word_length = 0;

    word_length = strlen(first);
    printf("Full name enclosed in double quotation marks,"
           " with %d spaces to spare:\n", WIDER);
    printf("\"%*s\"\n", WIDER + word_length, first);
}
