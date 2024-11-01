#include "sort.h"

/**
 * bubble_sort - sort listt with bubble
 * @array: the array to be printed
 * @size: number of elements in @array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i = 0, o = size;
	int temp;

	if (array == NULL)
		return;
	for (o = size; o > 0; o--)
	{
		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				print_array(array, size);
			}
		}
	}
}
