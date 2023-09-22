#include "sort.h"

void swap(int *array, int index1, int index2);

/**
* selection_sort - sorts an array of integers in asccending
* order using the selection sort algorithm.
* @array: array to be sorted
* @size: size of the array
* Return: Nothing
*/

void selection_sort(int *array, size_t size)
{
size_t i, j, min_ele;

if (array == NULL || size < 2)
return;

for (i = 0; i < size - 1; i++)
{
min_ele = i;
for (j = i + 1; j < size; j++)
{
if (array[j] < array[min_ele])
min_ele = j;
}
if (min_ele != i)
{
swap(array, i, min_ele);
print_array(array, size);
}
}
}


/**
* swap - swaps two elements in an array
* @array: array of elements
* @index1: First element.
* @index2: Second element to be swapped
*/

void swap(int *array, int index1, int index2)
{
int i = array[index1];
array[index1] = array[index2];
array[index2] = i;
}
