#include "search_algos.h"

/**
 * advanced_binary - Searches for the first occurrence of a value in a sorted
 *                   array of integers.
 *
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 *
 * Return: Index where value is located, or -1 if value is not present or array
 *         is NULL.
 */
int advanced_binary(int *array, size_t size, int value)
{
    size_t i, half;
    int index;

    if (array == NULL || size == 0)
        return (-1);

    printf("Searching in array: ");
    for (i = 0; i < size; i++)
    {
        printf("%d", array[i]);
        if (i == size - 1)
            printf("\n");
        else
            printf(", ");
    }

    if (size == 1)
    {
        if (array[0] == value)
            return (0);
        else
            return (-1);
    }

    half = (size - 1) / 2;
    if (array[half] >= value)
        index = advanced_binary(array, half + 1, value);
    else
    {
        index = advanced_binary(array + half + 1, size - half - 1, value);
        if (index != -1)
            index += half + 1;
    }

    if (index != -1 && array[index - 1] == value)
        index = advanced_binary(array, half, value);

    return (index);
}
