#include "sort.h"
#include <stdio.h>

/**
 *quick_sort- sorts all integers of array according to quick sort algorithm
 *@array: array of integers
 *@size : size of arrays
 **/

void quick_sort(int *array, size_t size)

{ 
	if (size < 2)
		return;

	quick_recursive_call(array, 0, (int)size - 1, size);
}

/**
 *quick_recursive_call - function that performs recursion on left and right indexes
 *@array : array of integers
 *@size : size of array
 *@left : left index 
 *@right: right index
 */

void quick_recursive_call(int *array,int left, int right, size_t size)

{
	int pivot;

	if (left < right)

	{

		pivot = partition(array, left, right, size);
		quick_recursive_call(array, left, pivot - 1, size);
		quick_recursive_call(array, pivot + 1, right, size);

	}

}

/**
 *partition - searches for the pivot  point
 * @array : array of integers
 * @size :size of arrays
 * @low : index of integer smaller than pivot
 * @high : index of integers larger than pivot
 */
int partition(int *array, int left, int right, size_t size)

{	int j, i;

	int temp;

	i = left - 1;

	for (j = left; j < right; j++)

	{
		if (array[j] < array[right])

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

	if (array[right] < array[i + 1])

	{
		temp = array[i + 1];
		array[i + 1] = array[right];
		array[right] = temp;
		print_array(array, size);

	}

	return (i + 1);
}





