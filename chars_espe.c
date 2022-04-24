#include "main.h"

/**
 * spec_char - con ctrl d, se sale y maneja
* el error, cuando el usuario sigue tabulando ejecuta
* el comando
 * @bytes: numero de bytes del input
 * @buf: buffer
 * @ex_st: exit status
 * Return: 0
 */

int spec_char(char *buf, ssize_t bytes, int *ex_st)
{
    int i = 0;

    if (bytes == EOF && isatty(STDIN_FILENO) == 1)
    {
        _putchar('\n');
        free(buf);
        exit(*ex_st);
    }

    if (bytes == EOF && isatty(STDIN_FILENO) == 0)
    {
        free(buf);
        exit(*ex_st);
    }

    if (_strcmp(buf, "\n") == 0)
    {
        *ex_st = 0;
        return (127);
    }

    while (buf[i] != '\n')
    {
        if (buf[i] != ' ' && buf[i] != '\t')
            return (0);

        ++i;
    }

    *ex_st = 0;
    return (127);  
}