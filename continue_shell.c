#include "main.h"

/**
 * _continue_main - funcion que continua el main de la shell
 * @stat: estado del PATH, si lo encontrado es ejecutable o no
 * @args: argumentos parseados
 * @ex_st: exit status
 * @count: cuenta 
 */

void _continue_main(int stat, char **args, int *ex_st, int *count)
{
    if (stat == 2)
    {
        if (access(args[0], X_OK) == 0)
        {
            if (fork() == 0)
                execve(args[0], args, NULL);
            
            else
                wait(NULL);
            *ex_st = 0;
        }
        else if (access(args[0], F_OK) != 0)
        {
            print_str("sh: ");
            print_int(count);
            print_str(": ");
            perror(args[0]);
            *ex_st = 126;
        }
    }
    free(args);
}
