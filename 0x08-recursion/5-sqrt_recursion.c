#include "main.h"

/**
 * _sqrt_recursion_help - a function that assists the
 * _sqrt_recursion function
 * @n: integer
 * @i: root
 * Return: -1 if n does not have a natural square root
 */
int _sqrt_recursion_help(int n, int i)
{
	if (i * i == n)
	{
	return (i);
	}
	else if (i * i > n)
	{
	return (-1);
	}
	else
	{
	return (_sqrt_recursion_help(n, i + 1));
	}
}

/**
 * _sqrt_recursion - a function that returns the
 * natural square root of a number
 * @n: integer
 * Return: whatever has been defined in the
 * _sqrt_recursion_help
 */
int _sqrt_recursion(int n)
{
	return (_sqrt_recursion_help(n, 0));
}





