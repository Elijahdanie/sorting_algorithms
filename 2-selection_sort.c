#include "sort.h"

/**
 * selection_sort - sort an array using the selection sort algorithm
 * @array: array to sort
 * @size: size of array
 * Return: void
 */
void selection_sort(int *array, size_t size)
{
	int minIndex, i = 0, j = 0, currValCache, arrSize = size;

	for (; i < arrSize - 1; i++)
	{
		minIndex = i; /*cache */
		j = i + 1; /*move to next value*/
		while (j < arrSize)
		{
			if (array[j] < array[minIndex])
				minIndex = j;
			j++;
		}
		if (minIndex != i)
		{
			currValCache = array[i];
			array[i] = array[minIndex];
			array[minIndex] = currValCache;
			print_array(array, size);
		}
	}
}
