#include "main.h"

/**
 * _strlen - longitud de una string
 * @str: string
 * Return: largo de una string
 */

int _strlen(char *str)
{
	int length = 0;

	while (str[length] != '\0')
		length++;

	return (length);
}
