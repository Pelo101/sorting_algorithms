#include "sort.h"
#include <stdio.h>

/**
 *quick_sort - sorts all integers of array according to quick sort algorithm
 *@array: array of integers
 *@size : size of arrays
 **/

void quick_sort(int *array, size_t size)

{
	int pivot;

	if (low < high)

	{

		pivot  = partition(array, low, high, size);
		quick_sort(array, low, pivot - 1);
		quick_sort(array, pivot + 1, hight);

	}

}

/**
 *partition - searches for the pivot  point
 * @array : array of integers
 * @size :size of arrays
 * @low : index of integer smaller than pivot
 * @high : index of integers larger than pivot
 */

void partition(int *array, int low, int high, size_t size)

{	int i, j;
	int temp;

	int i = low - 1;

	for (int j = low; j < high; j++)

	{
		if (array[j] < array[high])

		{
			i++;

			if (i != j)

			{
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
				print_array(array, size);
			}



		}

	}

	if (array[high] < array[i + 1])

	{
		temp = array[i + 1]
		array[i + 1] = array[high]
		array[high] = temp;
		print_array(array, size);

	}

	return (i + 1);
}





