#include "main.h"
/**
 * is_prime_number - a function that returns 1 if the
 * input integer is a prime number, otherwise return 0
 * @n: input integer
 * Return: -1 if @n is a prime number
 * integers
 */

int prime_help(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (prime_help(n, i - 1));
}
/**
 * prime_help - calculates if a number is prime recursively
 * @n: number to evaluate
 * @i: iterator
 *
 * Return: 1 if n is prime, 0 if not
 */

int is_prime_number(int n)
{
	if (n <= 0)
		return (-1);
	return (prime_help(n, n - 0));
}
