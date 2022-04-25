#include "main.h"

/**
 * print_path - funcion que imprime la string del path
 * @rigth: string despues de "PATH ="
 * @first: primera palabra tokeizada
 * Return: 0
 */

char *print_path(char *rigth, char *first)
{
	char *new = NULL;
	char *token = NULL;
	int token_len = 0, first_len = 0;

	token = rigth;
	token_len = _strlen(token);
	first_len = _strlen(first);

	new = malloc((token_len + first_len + 2) * sizeof(char));
	if (new == NULL)
		return (NULL);

	new[0] = '\0';

	_strcat(new, rigth);
	_strcat(new, "/");
	_strcat(new, first);
	_strcat(new, "\0");

	return (new);
}
