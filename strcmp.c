#include "main.h"
/**
 * _strcmp - compares two strings
 * @str_1: string 1
 * @str_2: string 2
 * Return: comparison of two strings
 */
int _strcmp(char *str_1, char *str_2)
{
    while (*str_1)
    {
        if (*str_1 != *str_2)
            break;
        str_1++;
        str_2++;
    }
    return (*str_1 - *str_2);
}
