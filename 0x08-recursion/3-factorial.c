#include "main.h"
/**
 * factorial -  a function that returns the factorial of a given number
 *
 * @n: integer whose factorial is to be calculated
 * Return: -1 if n becomes or is less than 0 or return the factorial other
 * integers
 */
int factorial(int n)
{
	if (n == 0)
	{
	return (1);
	}
	return (n * factorial(n - 1));
}

