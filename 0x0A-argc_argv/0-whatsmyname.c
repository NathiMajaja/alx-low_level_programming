#include "main.h"
#include <stdio.h>

/**
 * main -prints the nme of the program
 * @argc: count arguments
 * @argv: arguments
 * Return: always 0, on success
 */

int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);
	return (0);
}
