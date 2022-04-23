#include "main.h"
/**
 * _putchar - imprime 1 character
 * @C: character
 * Return: character
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
