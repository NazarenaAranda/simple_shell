#include "main.h"

/**
 * _path - funcion para imprime el environment de PATH
 * @env: environment
 * @first: la primer palabra tokenizada (el comando)
 * @input: argumentos tokenizados
 * @ex_st: exit status
 * Return: 0
 */

char *_path(char *first, char **env, char **input, int *ex_st)
{
	int i;
	char *tmp, *left, *right;
	char *new = NULL, *cp_env = NULL;

	for (i = 0; env[i] != NULL; i++)
	{
		cp_env = _strdup(env[i]);
		left = strtok(cp_env, "= \t");
		tmp = strtok(NULL, "= \t");

		if (_strcmp(left, "PATH") == 0)
		{
			right = strtok(tmp, ": \t");
			while (right)
			{
				new = print_path(right, first);
				if (access(new, X_OX) == 0)
				{
					if (fork() == 0)
						execve(new, input, NULL);
					else
						wait(NULL);

					*ex_st = 0;
					free(new);
					free(cp_env);
					return (0);
				}

				right = strtok(NULL, ": \t")
				free(new);
			}
		}
		free(cp_env);
	}
	return (2);
}