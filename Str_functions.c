#include "main.h"
/**
 * _strcmp - compare two strings
 * @comp: source string
 * @com: string to be compare againt source.
 *
 * Return: 0 if its equal, otherwise is not equal.
 */
int _strcmp(char *comp, char *com)
{
	while (*comp == *com)
	{
		if (*comp == '\0')
			return (0);
		comp++;
		com++;
	}
	return (*comp - *com);
}
/**
 * _strncmp - Compares two strings with n size
 *
 * @com: Given String 1
 * @comp: Given String 2
 * @c: Size to character compare
 * Return: 0 both strings are equals
*/
int _strncmp(char *com,  char *comp, size_t c)
{
	while (c && *com && (*com == *comp))
	{
		++com;
		++comp;
		--c;
	}

	if (c == 0)
		return (0);
	else
		return (*(unsigned char *)com - *(unsigned char *)comp);
}
/**
 * _strcpy - Copies the string pointed to by src
 * @dest: copy
 * @src: origin
 * Return: Return the copy of the string
 */
char *_strcpy(char *dest, char *src)
{
	int cp;

	cp = 0;

	while (src[cp] != '\0')
	{
		dest[cp] = src[cp];
		cp++;
	}
	dest[cp] = '\0';

	return (dest);
}