#include "sort.h"

/**
* swp -	Swaps values from two
* @array: Array to swap values from
* @i: value under index (i) to swap
* @j: value under index (j) to swap
* @s: ize of the array
*/
void swp(int *array, int i, int j, int s)
{
	int cp = 0;

	cp = array[i];
	array[i] = array[j];
	array[j] = cp;
	print_array(array, s);
}

/**
* low_part - Partitions array
* @array: Array to partition.
* @l: lowest index
* @h:  highest index
* @s: size
* Return: Returns two partitions based
*/
int low_part(int *array, int l, int h, int s)
{
	int i = 0, j = 0, p = 0;

	p = array[h];

	i = l;

	for (j = l; j < h; j++)
	{
		if (array[j] <= p)
		{
			if (j != i)
				swp(array, j, i, s);
			i++;
		}
	}
	if (i != h)
		swp(array, i, h, s);
	return (i);
}

/**
* rec_part - Helper function for Quick Sort
* @array: Array to be partitioned
* @l: low element
* @h: high element
* @s: size of the array
*/
void rec_part(int *array, int l, int h, int s)
{
	int pr = 0;

	if (l < h)
	{
		pr = low_part(array, l, h, s);
		rec_part(array, l, pr - 1, s);
		rec_part(array, pr + 1, h, s);
	}
}


/**
* quick_sort -  Sorts an array with the Quicksort Algorithm
* @array:       Array to be sorted
* @size:        Size of the array
* Return:       Sorted array in asending order
*/
void quick_sort(int *array, size_t size)
{
	size_t l = 0, h = 0;

	h = (size - 1);

	rec_part(array, l, h, size);
}
