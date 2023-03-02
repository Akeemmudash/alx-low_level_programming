#include "main.h"

/**
 *main - entry point
 * Return: Always 0
 * _strcat - concat 2 strings
 * @dest:char
 * @src:char
 * Return:char
 */
int main(void){
char *_strcat(char *dest, char *src)
{
	char *s = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (s);
}
	return (0);
}
