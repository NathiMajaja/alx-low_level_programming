#include "main.h"
#include <stdio.h>

/**
 * main - print the name of the program
 * @argc: count arguments
 * @argv: arguments
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	(void) argv; /*Ignore argv*/
	printf("%i\n", argc - 1);

	return (0);
}
