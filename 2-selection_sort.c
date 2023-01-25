#include "sort.h"
#include <stdio.h>


/**
 * selection_sort- sorts integers according to selection algorithm
 * @array: array of integers
 * @size : size of an array
 **/

void selection_sort(int *array, size_t size)

{
	unsigned int i;
	unsigned int j, min_idx;

	 int temp;

	if (size < 2)
		return;

	for (i = 0; i < size - 1 ; i++)

	{
		min_idx = i;

		for (j = i + 1; j < size - 1 - i; j++)
		{
			if (array[j] < array[min_idx])
				min_idx = j;
		}

		temp = array[i];
		array[i] = array[min_idx];
		array[min_idx] = temp;
		if (i != min_idx)
			print_array(array, size);
	}


}
