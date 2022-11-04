#include "search_algos.h"

void print(int *array, size_t lo);

/**
 * jump_search - function to find a value in an array
 * using the jum search algorithm
 * @size: length of the array
 * @value: value to be searched for
 * @array: array where the value is to be searched
 * Return: value if found or -1 if array is null or value not found
 */

int jump_search(int *array, size_t size, int value)
{
	size_t jump = sqrt(size);
	size_t lo = 0;
	size_t hi = jump;
	size_t i;

	if (!array || size == 0)
		return (-1);
	print(array, lo);
	while ((array[hi] < value) && (hi < size))
	{
		print(array, hi);
		lo = hi;
		hi += jump;
		if (hi > size - 1)
		{
			break;
		}
	}
	printf("Value found between indexes [%ld] and [%ld]\n", lo, hi);
	for (i = lo; i <= hi && hi <= size - 1; i++)
	{
		print(array, i);
		if (array[i] == value)
		{
			return (i);
		}
	}
	print(array, lo);
	return (-1);

}

/**
* print - to print the array
* @lo: lower bound of the array
* @array: array to be searched
* Return: Null
*/

void print(int *array, size_t lo)
{

	printf("Value checked array[%ld] = [%d]\n", lo, array[lo]);
}
