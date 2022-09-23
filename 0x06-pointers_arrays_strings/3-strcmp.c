#include "main.h"

/**
* _strcmp - compares two strings
* @s1: first string to be compared
* @s2: second one
* Return: an int
*/

int _strcmp(char *s1, char *s2)
{
	int i = 0, j = 0;

	while (j == 0)
	{
		if ((*(src + i) == '\0') && (*(src + i) == '\0'))
		{
			break;
		}
		j = *(s1 + i) - *(s2 + i);
		i++;
	}

	return (j);
}
