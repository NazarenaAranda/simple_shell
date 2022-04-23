#include "main.h"

/**
 * _parse - Parsear una string del input
 * @str: String a parsear
 * Return: Puntero a la str parseada
 */

char **_parse(char *str)
{
	char *par = NULL, *par2 = NULL, *cp = NULL, **args;
	int arg_num = 0, i = 0;

	cp = _strdup(str);
	par = strtok(cp, " ");

	while (par != NULL)
	{
		arg_num++;
		par = strtok(NULL, " ");
	}

	args = malloc(sizeof(char *) * (arg_num + 1));

	par2 = strtok(str, " ");

	while (par2 != NULL)
	{
		args[i] = par2;
		par2 = strtok(NULL, " ");
		i++;
	}

	args[i] = NULL;

	return (args);
}

