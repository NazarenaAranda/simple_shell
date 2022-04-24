#include "main.h"

/**
 * nnl - removes the new line with the NULL character
 * @str: la linea
 * Return: nothing
 */
void nnl(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] == '\n')
		{
			str[i] = '\0';
			return;
		}

		i++;
	}
}
