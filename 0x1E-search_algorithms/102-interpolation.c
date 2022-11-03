#include "search_algos.h"

/**
 * interpolation_search - interpolation search
 *
 * @array: pointer to the first item in the array
 * @size: size of the array
 * @value: value to search for in the array
 * Return: int - index of the searched value
 */
int interpolation_search(int *array, size_t size, int value)
{
	int low = 0;
	int high = size - 1;
	int mid;

	while ((array[high] != array[low]) &&
			(value >= array[low]) && (value <= array[high]))
		{
		mid = low + ((value - array[low])
		* (high - low) / (array[high] - array[low]));

		if (array[mid] < value)
			low = mid + 1;
		else if (value < array[mid])
			high = mid - 1;
		else
			return (mid);
	}

	if (value == array[low])
		return (low);
	else
		return (-1);
}