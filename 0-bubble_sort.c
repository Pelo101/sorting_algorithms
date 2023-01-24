#include "sort.h"
#include <stdio.h>

/**
 *bubble_sort - sorts an array of integers in ascending order.
 *@array : an array of integers
 *@size : size of an array
 */

void bubble_sort(int *array, size_t size)

{
	unsigned int i, j;
	int temp;

	if (size <= 1)
		return;

	for (i = 0; i < size - 1; i++)

	{
		for (j = 0; size - i - 1; j++)

		{
			if (array[j] > array[j + 1])

			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
			}
		}
	}
}
