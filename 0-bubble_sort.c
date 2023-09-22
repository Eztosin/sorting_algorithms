#include "sort.h"

/**
* bubble_sort - sorts an array of int in ascending order.
* @array: array to be sorted
* @size: size of the array
* Return: Nothing.
*/

void bubble_sort(int *array, size_t size)
{
size_t i, j;
int ele_swap;

if (array == NULL || size < 2)
return;

for (i = 0; i < size - 1; i++)
{
j = 0;
while (j < size - i - 1)
{
if (array[j] > array[j + 1])
{
ele_swap = array[j];
array[j] = array[j + 1];
array[j + 1] = ele_swap;
print_array(array, size);
}
j++;
}
}
}
