#include "main.h"

/**
* _strchr -  function that locates a character in a string.
* @s: string s
*
* @c: character c
*
* Return: : string sa pointer to the first occurrence of the
* character c in the string s, or NULL if the character is n
* ot found.
*
*/

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}else {
			s++;
		}
	}
	return (NULL);
}
