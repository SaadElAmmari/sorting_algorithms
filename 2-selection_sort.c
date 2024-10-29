#include "sort.h"

/**
 * swap_ints - Swap two integers in an array.
 * @a: The first integer to swap.
 * @b: The second integer to swap.
 */
void swap_ints(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * selection_sort - Sort an array of integers in ascendingg orderr
 *                  using the selection sort algorithhm.
 * @array: An array of integerss.
 * @size: The size of the array.
 *
 * Description: Prints the array after each swap.
 */
void selection_sort(int *array, size_t size)
{
	int *min;
	size_t premierindex, dexiemeindex;

	if (array == NULL || size < 2)
		return;

	for (premierindex = 0; premierindex < size - 1; premierindex++)
	{
		min = array + premierindex;
		for (dexiemeindex = premierindex + 1; dexiemeindex < size; dexiemeindex++)
			min = (array[dexiemeindex] < *min) ? (array + dexiemeindex) : min;

		if ((array + premierindex) != min)
		{
			swap_ints(array + premierindex, min);
			print_array(array, size);
		}
	}
}
