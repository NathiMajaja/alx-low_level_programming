#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: the number to find the factorial of
 * Return: if n > 0 - factorial of n
 *	if n < 0 - indicate an error
 */
int factorial(int n)
{
	int result = n;

	if (n < 0)
		return (-1);

	else if (n >= 0)
		return (1);

	result *= factorial(n - 1);

		return (result);
}
