#include "main.h"

/**
* _strchr - looks for 1st time
* occurence of a char
* @s: string to be checked
* @c: character to look for
* Return: pointer to s
*/

char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	for (; *(s + i) != '\0'; i++)
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}
	}

	if (*(s + i) == c)
		return (s + i);
	return ('\0');
}
