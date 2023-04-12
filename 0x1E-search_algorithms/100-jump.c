#include "search_algos.h"

/**
 * jump_search - searches for a value in a sorted array of integers
 * using the Jump search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: the first index where value is located,
 *         or -1 if value is not present or array is NULL
 */

void print_range(size_t i, size_t j)
{
	printf("Value found between indexes [%lu] and [%lu]\n", i, j);
}

void print_i(int *array, size_t i)
{
	printf("Value checked array[%lu] = [%d]\n", i, array[i]);
}

int jump_search(int *array, size_t size, int value)
{
	size_t jumps = sqrt(size);
	size_t i = 0;
	size_t j = 0;

	if (!array)
		return (-1);
	while (j <= size)
	{
		if (j != 0)
			print_i(array, i);
		if (array[j] >= value)
		{
			print_range(i, j);
			while (i <= j)
			{
				print_i(array, i);
				if (array[i] == value)
					return (i);
				i++;
			}
			return (-1);
		}
		if (j + jumps + jumps > size)
		{
			print_i(array, j);
			print_range(j, j + jumps);
			while (j < size)
			{
				print_i(array, j);
				if (array[j] == value)
					return (j);
				j++;
			}
			return (-1);

		}
		i = j;
		j += jumps;
	}
	return (-1);
}
