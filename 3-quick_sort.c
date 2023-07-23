#include "sort.h"

size_t lomuto(int *array, size_t size, size_t l, size_t r);
void q_sort_helper(int *array, size_t size, size_t l, size_t r);

/**
 * quick_sort - sorts an array using quick sort
 * @array: array to sort
 * @size: Size of array
 */
void quick_sort(int *array, size_t size)
{
	if (!array || size < 2)
		return;

	q_sort_helper(array, size, 0, (size - 1));
}

/**
 * q_sort_helper - performs recursive sort
 * @array: array to sort
 * @size: size of array
 * @l: first index or left
 * @r: last index or right
 */
void q_sort_helper(int *array, size_t size, size_t l, size_t r)
{
	size_t lomuto_idx;

	lomuto_idx = lomuto(array, size, l, r);
	if (lomuto_idx - l > 1)
		q_sort_helper(array, size, l, (lomuto_idx - 1));
	if (r - lomuto_idx > 1)
		q_sort_helper(array, size, (lomuto_idx + 1), r);
}

/**
 * lomuto - Implemets lomuto partioning
 * @array: array to partition
 * @size: size of array
 * @l: idx of sirst array
 * @r: index of last array
 * Return: indx of pivot
 */
size_t lomuto(int *array, size_t size, size_t l, size_t r)
{
	int pivot, temp;
	size_t above, below;

	pivot = array[r];
	above = below = l;
	for (; below < r; below++)
	{
		if (array[below] < pivot)
		{
			if (below > above)
			{
				temp = array[below];
				array[below] = array[above];
				array[above] = temp;
				print_array(array, size);
			}
			above++;
		}
	}
	if (array[above] != pivot)
	{
		temp = array[above];
		array[above] = pivot;
		array[r] = temp;
		print_array(array, size);
	}
	return (above);
}
