#include "main.h"
char *_getenv(char *name)
{
	int a, b, c;
	size_t n1, v1;
	char *valor;

	n1 = strlen(name);
	for (a = 0; environ[a]; a++)
	{
		if (strncmp(name, environ[a], n1) == 0)
		{
			v1 = strlen(environ[a]) - n1;

			valor = malloc(sizeof(char) * v1);
			if (!valor)
			{
				free(valor);
				perror("no se pudo alocar");
				return (NULL);
			}
			c = 0;
			for (b = n1 + 1; environ[a][b]; b++, c++)
				valor[c] = environ[a][b];
			valor[c] = '\0';
			return (valor);
		}
	}
	return (NULL);
}


