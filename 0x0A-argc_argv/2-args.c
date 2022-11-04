#include "main.h"
#include <stdio.h>

/**
 * main - prints all arguments it receives
 * @argc: count arguments
 * @argv: arguments
 * Return: 0 on success
 */
int main(int argc, char argv[])
{/*Declaring variables*/
	int count = 0;

	if (argc > 0)
	{/*WHILE - Print each arguments*/
		while (count < argc)
		{
			printf("%d\n", argv[count]);
			count++;
		}
	}
}
