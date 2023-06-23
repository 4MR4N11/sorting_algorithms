#include "sort.h"

/**
 * bubble_sort - Sorts an array of integers in ascending order
 * using the Bubble sort algorithm
 * @array: The array to be printed
 * @size: Number of elements in @array
*/

void bubble_sort(int *array, size_t size)
{
	size_t i = 0;
	int tmp;

	while (i < size && size < 2)
	{
		if (i < size - 1 && array[i] > array[i + 1])
		{
			tmp = array[i];
			array[i] = array[i + 1];
			array[i + 1] = tmp;
			print_array(array, size);
			i = -1;
		}
		i++;
	}
}
