#include "main.h"

/**
 * create_array - array that prints a string
 * @size: number of elements arrays
 * @c: char
 * Return: pointer
 */

char *create_array(unsigned int size, char c)
{
	char *buffer;
	unsigned int position;

	if (size == 0)
	{
		return (NULL);
	}

	else
	{
		position = 0;
		while (position < size)
		{
			*(buffer) = c;
			position++;
		}
		return (buffer);
	}
}
