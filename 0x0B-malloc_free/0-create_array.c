#include "main.h"
#include <stdlib.h>

/**
 * create_array - array that prints a string
 * @size: number of elements arrays
 * @c: char
 * Return: char *
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size == 0)
		return (NULL);
	array = malloc(size * sizeof(char));
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
		array[i] = c;
	return (array);
}
