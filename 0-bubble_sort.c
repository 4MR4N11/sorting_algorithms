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
	int tmp, flag = 1;

	while (flag == 1 && size > 1)
	{
		flag = 0;
		i = 0;
		while (i < size)
		{
			if (i < size - 1 && array[i] > array[i + 1])
			{
				tmp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = tmp;
				print_array(array, size);
				flag = 1;
			}
			i++;
		}
	}
}
