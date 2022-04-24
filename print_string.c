#include "main.h"

/**
 * print_str - imprimir una string
 * @str: string
 */

void print_str(char *str)
{
	int i, bytes, n;

	for (i = 0; str[i] != '\0'; i++)
			;

	bytes = i;

	n = write(STDOUT_FILENO, str, bytes);
	if (n == EOF)
		return;
}
