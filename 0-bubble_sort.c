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
void bubble_sort(int *array, size_t size)
{
int i, f, s, ne;
bool state = true;
for (ne = 0; ne < (int)size - 1; ne++)
{
state = true;
for (i = 0; i < (int)size - 1; i++)
{
if (array[i] > array[i + 1])
{
f = array[i];
s = array[i + 1];
array[i] = s;
array[i + 1] = f;
state = false;
print_array(array, size);
}
}
if (state == true)
{
break;
}
}

}
