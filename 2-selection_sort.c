#include "sort.h"

/**
 * selection_sort - sort an array using selection sort
 * @array: array to sort
 * @size: size of arrray
 */
void selection_sort(int *array, size_t size)
{
	int temp;
	size_t i, j, min_index;

	if (!array || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		min_index = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[min_index] > array[j])
				min_index = j;
		}
		if (min_index != i)
		{
			temp = array[i];
			array[i] = array[min_index];
			array[min_index] = temp;
			print_array(array, size);
		}
	}
}
