#include "sort.h"
/**
 * bubble_sort - sorts array of integers
 * @array: given array
 * @size: size of array
 * Return: void
*/

void bubble_sort(int *array, size_t size)
{
	int tmp;
	size_t i, j;
	bool swp;

	if (!array)
		return;

	swp = 1;
	i = 0;
	while (i < (size - 1) && swp)
	{
		swp = 0;
		j = 0;
		while (j < (size - 1 - i))
		{
			if (array[j] > array[j + 1])
			{
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
				swp = 1;
				print_array(array, size);
			}
		j++;
		}
	i++;
	}
}

