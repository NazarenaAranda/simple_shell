#include "main.h"

/**
 * _strcat - concatenar dos string
 * @src: string1
 * @dest: string2
 * Return: Strings concatenadas
 */
char *_strcat(char *dest, char *src)
{
	int len = _strlen(dest);
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[len +i] = src[i];
	dest[len + i] = '\0';

	return (dest);
}