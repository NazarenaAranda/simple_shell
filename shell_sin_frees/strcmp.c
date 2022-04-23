#include "main.h"

/**
* _strcmp - Comparar dos strings
* description: Esta funcion va a comparar dos strings
* @s1: Primer String
* @s2: Segunda string
* Return: @n bytes o @src
*/
int _strcmp(char *s1, char *s2)
{
	int a = 0;

	while (s1[a] != '\0' && s2[a] != '\0')
	{
		if (s1[a] != s2[a])
			return (s1[a] - s2[a]);
		a++;
	}
	if (s1[a] == '\0' && s2[a] == '\0')
	{
		return (0);
	}
	return (-1);
}
