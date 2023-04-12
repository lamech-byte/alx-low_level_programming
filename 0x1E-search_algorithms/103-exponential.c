#include "search_algos.h"
#include <stdio.h>

/**
 * exponential_search - Searches for a value in a sorted array of integers
 * using the Exponential search algorithm
 *
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 *
 * Return: The first index where value is located, or -1 if not found
 */

int exponential_search(int *array, size_t size, int value)
{
    size_t bound = 1;

    if (array == NULL)
        return (-1);

    while (bound < size && array[bound] < value) {
        printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
        bound *= 2;
    }

    printf("Value found between indexes [%lu] and [%lu]\n", bound / 2,
           bound < size ? bound : size - 1);

    size_t left = bound / 2;
    size_t right = bound < size ? bound : size;

    while (left < right) {
        printf("Searching in array: ");
        for (size_t i = left; i < right; i++) {
            printf("%d", array[i]);
            if (i != right - 1)
                printf(", ");
        }
        printf("\n");

        size_t mid = (left + right) / 2;

        if (array[mid] == value)
            return (mid);
        else if (array[mid] < value)
            left = mid + 1;
        else
            right = mid;
    }

    return (-1);
}
