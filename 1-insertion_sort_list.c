#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include "sort.h"

/**
 * bubble_sort - Entry point
 * @array: array
 * @size: size int
 * Return: Always 0 (Success)
 */
void insertion_sort_list(listint_t **list)
{
listint_t *current = (*list)->next;
listint_t *tmp, *prev;
while (current)
{
tmp = current;
while (tmp->prev && tmp->n < tmp->prev->n)
{
prev = tmp->prev;
prev->next = tmp->next;
if (tmp->next)
{
tmp->next->prev = prev;
}
tmp->prev = prev->prev;
tmp->next = prev;
if (prev->prev)
{
prev->prev->next = tmp;
}
else
{
*list = tmp;
}
prev->prev = tmp;
print_list(*list);
}
current = current->next;
}
}
