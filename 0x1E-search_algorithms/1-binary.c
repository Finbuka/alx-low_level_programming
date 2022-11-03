#include "search_algos.h"

/**
 * binary_search - binary search
 *
 * @array: pointer to the first item in the array
 * @size: size of the array
 * @value: value to search for in the array
 * Return: int - index of the searched value
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0;
	size_t right = size - 1;
	size_t midd, i;

	if (!array || size == 0)
		return (-1);

	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
				if (i < right)
					printf(", ");
		}
		printf("\n");
		midd = (left + right) / 2;
		if (array[midd] == value)
			return (midd);
		else if (array[midd] > value)
			right = midd - 1;
		else
			left = midd + 1;
	}
	return (-1);
}
