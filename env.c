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

/**
 * copy_env - copar environment
 * @env: environment
 * Return: copia de environment
 */

char **copy_env(char **env)
{
	char cp;
	int i;

	for (i = 0; env[i] != NULL; i++)
	{
		cp = env[i][0];
		env[i][0] = '\0';
		env[i][0] = cp;
	}
	return (env);
}
