#include "main.h"

/**
 * length - calculates the lenght of a string
 * @s: string which might be a palindrome
 * @len: original of stting
 *
 * Return: the length of string
 */

int length(char *s, int len)
{
if (*s != '\0')
{
	return (length(s + 1, len + 1));
}
	return (len);
}

/**
 * palinhelp - a function which acts a surbordinate function
 * for is_palindrome
 *
 * @s: string
 *
 * @st: start of palindrome
 *
 * @e: end of string
 * Return: -1 if @s is not a palindrome and 1 if it is
 */

int palinhelp(char *s, int st, int e)
{
if (e != 0)
{
	if (s[st] != s[e])
		return (-1);

	if (s[st] == s[e])
		{
		return (palinhelp(s, st + 1, e - 1));
		}
}
		return (1);
}
/**
 * is_palindrome - a function which acts a surbordinate function
 *
 *
 * @s: string
 *
 * Return: -1 if @s is not a palindrome and 1 if it is a palindrome
 */

int is_palindrome(char *s)
{
	int e;

	int palinlength = length(s, 0);

	if (palinlength == 0)
	{
		return (1);
	}

	e =  palinlength - 1;

	return (palinhelp(s, 0, e));
}
