#include "sort.h"

/**
 * partition - array partitionn
 * @array: array to sort
 * @first: first position
 * @last: last position
 * @size: array size
 * Return: int pivot index
 */
int partition(int *array, int first, int last, size_t size)
{
	int is = first - 1, temp, me;

	for (me = first; me <= last - 1; me++)
	{
		if (array[me] < array[last])
		{
			is++;
			if (is < me)
			{
				temp = array[is];
				array[is] = array[me];
				array[me] = temp;
				print_array(array, size);
			}
		}
	}
	if (array[is + 1] > array[last])
	{
		temp = array[is + 1];
		array[is + 1] = array[last];
		array[last] = temp;
		print_array(array, size);
	}

	return (is + 1);
}

/**
 * qs - sorts an array of integers recursivelly
 * @array: array to sort
 * @first: first position
 * @last: last position
 * @size: array size
 */
void qs(int *array, int first, int last, size_t size)
{
	int pivot;

	if (first < last)
	{
		pivot = partition(array, first, last, size);
		qs(array, first, pivot - 1, size);
		qs(array, pivot + 1, last, size);
	}
}

/**
 * quick_sort - sorts an array of integers using the quick
 * sort algorithm in ascending order
 * @array: array to sort
 * @size: array size
 */
void quick_sort(int *array, size_t size)
{
	qs(array, 0, size - 1, size);
}
