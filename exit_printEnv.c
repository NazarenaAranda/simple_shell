#include "main.h"

/**
 * comands - funcion que implementa el exit y el env
 * @input: buffer
 * @args: argumentos parseados
 * @env: environment
 * @ex_st: exit status
 */

void comands(char * input, char **args, char **env, int *ex_st)
{
    if (_strcmp(args[0], "exit") == 0)
    {
        free(args);
        free(input);
        exit(*ex_st);
    }

    if (_strcmp(args[0], "env") == 0)
        printenv(env, ex_st);
}