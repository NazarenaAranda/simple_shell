#include "main.h"

/**
 * strdup - Duplicar una string
 * @str: string a duplicar
 * Return: Puntero a la nueva string
 */
char *_strdup(char *str)
{
	char *dup;

	int i, j = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		j++;

	dup = malloc(sizeof(char) * j + 1);

	if (dup == NULL)
		return (NULL);
	dup[j] = '\0';

	return (dup);
}

