#include "main.h"

/**
 * pr_str - print a string
 * @str: string
 */
void pr_str(char *str)
{
    int i;
    int wc;
    int byt;
    char *buff;
    for (i = 0; str[i] != '\0'; i++)
            ;
    byt = i;
    wc = write(STDOUT_FILENO, str, byt);
    if (wc == 0)
        return;
}

/**
 * print_str - imprimir una string
 * @str: string
 */

void print_str(char *str)
{
	int i;

	for (; str[i] != '\0'; i++)
		_putchar(str[i]);
}
