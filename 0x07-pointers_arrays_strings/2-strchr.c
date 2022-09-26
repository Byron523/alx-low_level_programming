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
	int i;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (*(s + i) == c)
		{
			while (*(s + i) != '\0')
			{
				return (s + i);
			}
		}
		else if (*(s + i) == '\0')
		{
			return ('\0');
		}
	}
}
