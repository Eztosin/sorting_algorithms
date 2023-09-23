#include "sort.h"

void swap_ele(int *a, int *b);
void recursive_sort(int *array, int low, int high,
		    size_t size);
size_t lomuto_partition(int *array, int low, int high,
			size_t size);

/**
* lomuto_partition - selects the last element as a pivot element and
* rearranges the elements in an array of integers.
* @array: array to be sorted.
* @low: lower bound of the array
* @high: upper bound of the array
* @size: size of the array
* Return: the index of the pivot.
*/

size_t lomuto_partition(int *array, int low, int high, size_t size)
{
int pivot, i, j;

pivot = array[high];
i = low - 1;

j = low;
while (j <= high - 1)
{

if (array[j] < pivot)
{
i++;
swap_ele(&array[i], &array[j]);
print_array(array, size);
}
j++;
}
swap_ele(&array[i + 1], &array[high]);
print_array(array, size);
return (i + 1);
}

/**
* recursive_sort - implements quick sort recursively.
* @array: array to be sorted.
* @low: lower bound of the array.
* @high: upper bound of the array.
* @size: size of the array.
* Return: Nothing.
*/

void recursive_sort(int *array, int low, int high, size_t size)
{
size_t pi;
if (low < high)
{
pi = lomuto_partition(array, low, high, size);

recursive_sort(array, low, pi - 1, size);
recursive_sort(array, pi + 1, high, size);
}
}

/**
* quick_sort - sorts an array of integers in ascending order
* using Quick sort algorithm.
* @array: array to be sorted.
* @size: size of the array
* Return: Nothing.
*/

void quick_sort(int *array, size_t size)
{
if (array == NULL || size < 2)
return;

recursive_sort(array, 0, size - 1, size);
}

/**
* swap_ele - swaps elements in an array
* @a: pointer to first element.
* @b: pointer to second element.
* Return: nothing
*/

void swap_ele(int *a, int *b)
{
int holder;

holder = *a;
*a = *b;
*b = holder;
}
