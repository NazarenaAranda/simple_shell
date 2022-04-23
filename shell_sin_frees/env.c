#include "main.h"
int _env(char **n)
{
	char cmd[] = "env";
	int a = 0;

	if (_strcmp(*n, cmd) == 0)
	{
		while (environ[a])
		{
			write(STDOUT_FILENO, environ[a], strlen(environ[a]));
			write(STDOUT_FILENO, "\n", 1);
			a++;
		}
		return (1);
	}

	return (0);
}
