#include "main.h"

/**
 * printenv - imprime environment
 * @env: environment
 * @ex_st: exit status
 * Return: 0
 */

int printenv(char **env, int *ex_st)
{
	unsigned int i = 0;

	while (env[i] != NULL)
	{
		print_str(env[i]);
		_putchar('\n');
		i++;
	}
	*ex_st = 0;
	return (0);
}

