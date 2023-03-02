#include <stdio.h>
/**
"main- entry point to code
*
*description: contains function that concatenates 2 strings
*Return: Always 0.
*/
int main(void)
{
	char *strcat(char *dest, char *src)
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
	
	}

	return (0);
}

