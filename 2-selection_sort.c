#include "sort.h"

/**
 * selection_sort - sorts array of integers in ascending order
 * @array: given array
 * @size: size of array
 * Return: void
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, min;
	int tmp;

	if (!array)
		return;
	i = 0;
	while (i < (size - 1))
	{
		min = i;
		j = i + 1;
		while (j < size)
		{
			if (array[min] > array[j])
				min = j;
			j++;
		}

		if (i != min)
		{
			tmp = array[i];
			array[i] = array[min];
			array[min] = tmp;
			print_array(array, size);
		}
		i++;
	}
}
