#include <stdio.h>
#include "calculator.h"

void print_even(int arr[], int size);

int main()
{
    int numbers[] = {10, 5, 8};
    int size = 3;

    printf("Numbers: %d %d %d\n", numbers[0], numbers[1], numbers[2]);
    printf("Sum: %d\n", sum3(numbers[0], numbers[1], numbers[2]));
    printf("Product: %d\n", product3(numbers[0], numbers[1], numbers[2]));

    print_even(numbers, size);

    return 0;
}
