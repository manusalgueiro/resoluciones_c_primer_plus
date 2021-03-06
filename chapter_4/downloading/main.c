#include <stdio.h>
#include <stdlib.h>
#define BYTE_BIT 8 // in bits
#define MEGA 1024

int main(void)
{
    float   file_size = 0,
            file_size_bits = 0,
            download_speed = 0,
            download_speed_bits = 0,
            download_time = 0;

    printf("Enter the size of the file (MBytes): ");
    scanf("%f", &file_size);
    printf("Enter the download speed (Mbits): ");
    scanf("%f", &download_speed);

    file_size_bits = file_size * MEGA * BYTE_BIT;
    download_speed_bits = download_speed * MEGA;

    download_time = file_size_bits / download_speed_bits;
    printf("At %.2f megabits per second, a file of %.2f megabytes\n"
           "downloads in %.2f seconds", download_speed, file_size, download_time);

    return 0;
}
