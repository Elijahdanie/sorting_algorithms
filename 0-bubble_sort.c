#include "sort.h"

/**
 * bubble_sort - this sorts an array using bubble sort algorithm
 * 
 * @array: this is the array to be sorted
 * @size: this is the size of the array
 */
void bubble_sort(int *array, size_t size)
{
unsigned int i, j, swap, temp;

for (i = 0; i < size; i++)
{
swap = 0;
for ( j = i+1; j < size; j++)
{
if (array[j] < array[i])
{
temp = array[j];
array[j] = array[i];
array[i] = temp;
print_array(array, size);
swap = 1;
}
}
if (swap == 0)
{
break;
}
}
}
