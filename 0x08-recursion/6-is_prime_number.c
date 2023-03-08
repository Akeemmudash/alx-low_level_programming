#include "main.h"

/**
 * _prime - calculates if a number is prime recursively
 * @n: number to evaluate
 * @i: iterator
 *
 * Return: 1 if n is prime, 0 if not
 */

int _prime(int n, int i)
{
	if (i <= 2)
	return ((i == 2) ? (1) : (0));

	if (n % i == 0)
	return (0);

	if (i * i > n)
	return (1);

	return (_prime(n, (i + 1)));
}

/**
 * is_prime_number - a function that returns 1 if the
 * input integer is a prime number, otherwise return 0
 * @n: input integer
 * Return: -1 if @n is a prime number
 * integers
 */

int is_prime_number(int n)
{
	if (n <= 0)
	return (0);
	return (_prime(n, 2));

}
