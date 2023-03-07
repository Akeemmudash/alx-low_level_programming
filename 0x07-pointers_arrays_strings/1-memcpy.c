#include "main.h"
/**
* _memcpy - a function that copies memory area.
* @dest: destination memory area
*
* @src: source memory area
*
* @n: number of bytes to be copied
*
* Return: a pointer to @dest.
*/


char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;
	char **ptdest = dest;

	while (i < n)
	{
	**(ptdest + i) = src[i]
	i++;
	}
	return (**ptdest);
}
