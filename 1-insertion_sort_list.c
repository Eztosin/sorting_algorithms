#include "sort.h"

/**
* insertion_sort_list - sorts a doubly linked list of integers
* in ascending order using insertion sorting algorithm.
* @list: double pointer to the head of the list
* Return: Nothing
*/

void insertion_sort_list(listint_t **list)
{
listint_t *ptr, *to_check, *trv;

if (list == NULL || (*list) == NULL || (*list)->next == NULL)
return;

to_check = (*list)->next;

while (to_check != NULL)
{
ptr = to_check;
trv = ptr->prev;

while (trv != NULL && ptr->n < trv->n)
{
if (trv->prev != NULL)
trv->prev->next = ptr;
else
*list = ptr;

if (ptr->next != NULL)
ptr->next->prev = trv;

trv->next = ptr->next;
ptr->prev = trv->prev;

ptr->next = trv;
trv->prev = ptr;

print_list(*list);

trv = ptr->prev;
}
to_check = to_check->next;
}
}

