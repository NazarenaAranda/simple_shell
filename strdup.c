#include "main.h"

/**
 * _strdup - Duplicar una string
 * @str: string a duplicar
 * Return: Puntero a la nueva string
 */
char *_strdup(char *str)
{
	char *dup;

	int i, j;

	if (str == NULL)
		return (NULL);

	j = 0;

	for (i = 0; str[i] != '\0'; i++)
		j++;

	dup = malloc(sizeof(char) * j + 1);

	if (dup == NULL)
		return (NULL);

	for (i = 0; i < j ; i++)
		dup[i] = str[i];

	dup[j] = '\0';

	return (dup);

}

