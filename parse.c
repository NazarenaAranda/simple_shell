#include "main.h"

/**
 * _parse - Parsear una string del input
 * @str: String a parsear
 * Return: Puntero a la str parseada
 */

char **_parse(char *input)
{
	char *par1 = NULL, *par2 = NULL, *cp = NULL, **args;
	int num_arg = 0, i = 0;

	cp = _strdup(input);
	par1 = strtok(cp, " \t");

	while (par1 != NULL)
	{
		num_arg++;
		par1 = strtok(NULL, " \t");
	}

	args = malloc(sizeof(char *) * (num_arg + 1));

	if (args == NULL)
		return (NULL);

	par2 = strtok(input, " \t");

	while (par2 != NULL)
	{
		args[i] = par2;
		par2 = strtok(NULL, " \t");
	}

	args[i] = NULL;
	free(cp);
	return (args);
}
