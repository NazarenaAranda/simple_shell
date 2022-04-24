#include "main.h"

/**
 * str_concat - concatenar dos string
 * @s1: string1
 * @s2: string2
 * Return: Strings concatenadas
 */
char *_strcat(char *s1, char *s2)
{
	char *result;
	int long1, long2, a = 0, b = 0;
	long1 = _strlen(s1);
	long2 = _strlen(s2);

	result = malloc((long1 + long2 + 1) * sizeof(char));
	if (!result)
		return (NULL);
	*result = '\0';
	while (s1[b])
		result[a++] = s1[b++];
