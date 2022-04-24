#include "main.h"

/**
 * print_env - imprime environment
 * @env: environment
 * Return: 0
 */

int print_env(char **env)
{
	int i;

	while (env[i] != NULL)
	{
		print_str(env[i]);
		_putchar('\n');
		i++;
	}
	return (0);
}
