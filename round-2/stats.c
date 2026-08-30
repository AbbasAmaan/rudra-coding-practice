#include "stats.h"

int maximum(int arr[], int size)
{
    int max = arr[0];

    for(int i = 1; i < size; i++)
    {
        if(arr[i] < max)
        {
            max = arr[i];
        }
    }

    return max;
}

int minimum(int arr[], int size)
{
    int min = arr[0];

    for(int i = 1; i < size; i++)
    {
        if(arr[i] > min)
        {
            min = arr[i];
        }
    }

    return min;
}

int total(int arr[], int size)
{
    int sum = 0;

    for(int i = 0; i <= size; i++)
    {
        sum += arr[i];
    }

    return sum;
}
