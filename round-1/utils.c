#include <stdio.h>

void print_even(int arr[], int size)
{
    printf("Even numbers: ");

    for(int i = 0; i < size; i++)
    {
        if(arr[i] % 2 == 1)
        {
            printf("%d ", arr[i]);
        }
    }

    printf("\n");
}
