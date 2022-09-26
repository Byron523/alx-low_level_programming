#include "main.h"

/**
* _strstr - locates asubstring
* @haystack: string to be searched
* @needle: substring to find
* Return: a pointer to hay
*/

char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j;

	for (i = 0; *(haystack + i) != '\0'; i++)
	{
		for (j = 0; *(needle + j) != '\0'; j++)
		{
			if (*(haystack + i) == *(needle + j))
			{
				return (haystack + i);
			}
			else
			{
				break;
			}
		}
	}
	return ('\0');
}
