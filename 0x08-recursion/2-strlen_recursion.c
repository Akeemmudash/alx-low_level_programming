#include "main.h"
/**
 * _strlen_recursion - a recursion function that prints the length of a string
 *
 * @s: string
 * Return: nothing
 */


int _strlen_recursion(char *s)
{	int len = 0;

	if (*s != '\0')
	{
		_strlen_recursion(s + 1);
		len++;
	}
		return (len);
}
