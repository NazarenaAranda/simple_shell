#include "main.h"

/**
 * _strcpy - copa una string
 * @dest: str copiada
 * @src: str a copiar
 * Return: string copiada
 */

char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; a <= _strlen(src); a++)
		dest[a] = src[a];
	return (dest);
}

