#include "main.h"

/**
 * _path - funcion para imprime el environment
 * @env: environment
 * @first: char
 * Return: path
 */

char *_path(char *first, char **env)
{
	int i, j, k;
	char *env_copy;
	char *lef, *ri, *tmp, *tok_length, *new;

	for (i = 0; env[i] != NULL; i++)
	{
		env_copy = _strdup(env[i]);
		lef = strtok(env_copy, "=");
			ri = strtok(NULL, "=");
	}

	if (_strcmp(lef, "PATH") == 0)
	{
		tmp = strtok(ri, ":");
		while (tmp) /* loop al valor correcto */
			tok_length = tmp;
		for (j = 0; tok_length[j] != '0'; j++)
		       ; 	/* loop a traves de token */
		for (k = 0; first[k] != '\0'; k++)
			;

		new = malloc((j + k + 2) * sizeof(char))
		       ; 	/* barra diagonal, 2 y NULL */
			if (new == NULL)
				return (NULL);

		_strcat(new, first);
		_strcat(new, "/");
		_strcat(new, '\0');

		if (access(new, X_OK) == 0)
			return (new);

		tmp = strtok(NULL, ":");
		free(new);
	}
}


