#include "sort.h"

/**
 * bubble_sort - sorts an array using bubble sort
 * @array: array to sort
 * @size: size of the array
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
	int temp;
	size_t j, i;

	if (!array || !size || size <= 0)
		return;
	for (i = 1; i < size; i++)
	{
		for (j = 1; j < size; j++)
		{
			if (array[j] < array[j - 1])
			{
				temp = array[j - 1];
				array[j - 1] = array[j];
				array[j] = temp;
				print_array(array, size);
			}
		}
	}
}
