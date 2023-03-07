#include "main.h"
/**
* _strspn - function that gets the length of a prefix substring.
* @s: initial segment
*
* @accept: number of bytes accepted
*
* Return: number of bytes in the initial segment of @s which
* consist only of bytes from @accept
*/


unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0;
		while (*s != '\0')
		{
			if (*s != 32)
			{
				for (int i = 0; accept[i] != '\0'; i++)
				{
					if (*s == accept[i])
					{
						length++;
						accept++;
					}
				}		s++;
			}
		}
	return (length);
}

