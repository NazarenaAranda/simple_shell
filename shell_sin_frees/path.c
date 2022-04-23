#include "main.h"
int _path(char **comm)
{
	struct stat buff;
	char *valor, *path, *com_path;

	path = _getenv("PATH");
	valor = strtok(path, ":");
	while (valor != NULL)
	{
		com_path = str_cat(*comm, valor);
		if (stat(com_path, &buff) == 0)
		{
			*comm = strdup(com_path);
			free(com_path);
			free(path);
			return (0);
		}
		free(com_path);
		valor = strtok(NULL, ":\t");
	}
	free(path);
	return (1);
}
