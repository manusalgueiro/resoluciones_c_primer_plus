// Write a program that asks the user to enter a height in centimeters
// and then displays the height in centimeters and in feet and inches

#include <stdio.h>
#include <stdlib.h>

// Headers
int read_height_in_cm(void);
void show_results(int height_cm, int height_ft, float height_in);

int main(void)
{
    const float CM_X_FT = 30.48;
    const float IN_X_FT = 12.0;

    int height_in_cm = 0,
        height_in_ft = 0;

    float height_in_inches = 0;

    height_in_cm = read_height_in_cm();
    while (height_in_cm > 0)
    {
        height_in_ft = (int) height_in_cm/CM_X_FT;

        height_in_inches = (height_in_cm/CM_X_FT - height_in_ft)*IN_X_FT;

        show_results(height_in_cm, height_in_ft, height_in_inches);

        height_in_cm = read_height_in_cm();
    }
    printf("bye\n");

    return 0;
}

// Functions
int read_height_in_cm(void)
{
    int height_cm = 0;

    printf("Enter a height in centimeters: ");
    scanf("%d", &height_cm);

    return height_cm;
}

void show_results(int height_cm, int height_ft, float height_in)
{
    printf("%d cm = %d feet %.2f inches.\n",
           height_cm, height_ft, height_in);
}
