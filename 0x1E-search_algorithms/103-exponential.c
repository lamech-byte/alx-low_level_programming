#include "search_algos.h"

/**
 * exponential_search - Searches for a value in a sorted array of integers
 *                      using the Exponential search algorithm
 * @array: A pointer to the first element of the array to search in
 * @size: The number of elements in array
 * @value: The value to search for
 *
 * Return: The first index where value is located, or -1 if not found or array is NULL
 */

int exponential_search(int *array, size_t size, int value)
{
    if (array == NULL)
        return (-1);

    if (size == 0)
        return (-1);

    if (array[0] == value)
        return (0);

    size_t bound = 1;
    while (bound < size && array[bound] < value) {
        printf("Value checked array[%ld] = [%d]\n", bound, array[bound]);
        bound *= 2;
    }

    size_t left = bound / 2;
    size_t right = bound < size ? bound : size - 1;
    while (left <= right) {
        size_t mid = (left + right) / 2;
        printf("Searching in array: ");
        for (size_t i = left; i < right; i++) {
            printf("%d, ", array[i]);
        }
        printf("%d\n", array[right]);
        if (array[mid] == value) {
            return (mid);
        } else if (array[mid] < value) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return (-1);
}
