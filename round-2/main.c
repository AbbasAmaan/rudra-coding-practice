#include <stdio.h>
#include "stats.h"

void print_even(int arr[], int size);

int main()
{
    int readings[] = {12, 7, 18, 5, 20};
    int size = 5;

    printf("Readings: %d %d %d %d %d\n",
           readings[0], readings[1], readings[2], readings[3], readings[4]);

    printf("Maximum: %d\n", maximum(readings, size));
    printf("Minimum: %d\n", minimum(readings, size));
    printf("Sum: %d\n", total(readings, size));

    print_even(readings, size);

    return 0;
}
